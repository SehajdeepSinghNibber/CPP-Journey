#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int pow = 1;

        while(pow<=n){
            if(pow==n){
                return true; 
            }
            if (pow <= INT_MAX / 2) {
                pow = pow * 2;
            } else {
                return false;
            }
        }

        return false;
    }
};

int main(){
    
    return 0;
}