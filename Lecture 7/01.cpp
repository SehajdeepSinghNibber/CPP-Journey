#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long reverse = 0;
        long long n = x;

        if (n > 0) {
            while (n > 0) {
                int last = n % 10;

                reverse = reverse * 10 + last;

                if (reverse > INT_MAX) {
                    return 0;
                }

                n = n / 10;
            }

            return reverse;
        }
        else if (n < 0) {
            n = -n;

            while (n > 0) {
                int last = n % 10;

                reverse = reverse * 10 + last;

                if (reverse > (long long)INT_MAX + 1) {
                    return 0;
                }

                n = n / 10;
            }

            reverse = -reverse;

            if (reverse < INT_MIN) {
                return 0;
            }

            return reverse;
        }
        else {
            return 0;
        }
    }
};

int main(){
    
    return 0;
}