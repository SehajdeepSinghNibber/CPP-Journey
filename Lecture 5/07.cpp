#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {

        // string binary="";

        // unsigned int num = n;

        // while(num>0){
        //     int remainder = num%2;
        //     binary+=to_string(remainder);
        //     num = num/2;
        // }

        // int output = 0;

        // for(int i = 0; i<binary.length();i++){
        //     if(binary[i]=='1'){{
        //         output++;
        //     }}
        // }

        // return output;

        int output = 0;

        while(n!=0){
            if(n&1){
                output++;
            }
            n=n>>1;
        }

        return output;
    }
};

int main(){
    
    Solution s;
    int a = s.hammingWeight(7);

    cout<<a;

    return 0;
}