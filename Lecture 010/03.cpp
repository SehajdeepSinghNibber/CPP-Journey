#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        
        // else if(x>0 && x<10){
        //     return true;
        // }
        // else{
        //     string num = to_string(x);
        //     int n = num.size();
        //     for(int i = 0; i<n;i++){
        //         if(num[i]!=num[n-i-1]){
        //             return false;
        //         }
        //     }
        //     return true;
        // }
        else{
            int ogNumber = x;
            long long num = 0;
            while(x>0){
                 int lastDigit = x%10;
                 num = num*10+lastDigit;
                 x=x/10;
            }
            if(ogNumber==num){
                return true;
            }
            else{
                return false;
            }
        }

    }
};

int main(){
    
    return 0;
}