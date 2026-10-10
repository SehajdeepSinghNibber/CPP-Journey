#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;

        while (n>0){
            int a = n%10;
            sum+=a;
            product= product*a;
            n= n/10;
        }

        int result = product-sum;
        return result;
    }
};

int main(){
    
    Solution s;

    int a = s.subtractProductAndSum(27);

    cout<<a;

    return 0;
}