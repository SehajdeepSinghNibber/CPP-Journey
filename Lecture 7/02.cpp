#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {

        string revBinary="";

        if(n==0){
            return 1;
        }

        while (n>0){
            if(n&1){
                revBinary+='0';
                n=n>>1;
            }
            else{
                revBinary+='1';
                n=n>>1;
            }
        }

        int ans = 0;
        int power = 1;

        for(int i = 0; i< revBinary.length();i++){
            if(revBinary[i]=='1'){
                ans+=power;
            }
            power*=2;
        }

        return ans;
    }
};

int main(){
    
    return 0;
}