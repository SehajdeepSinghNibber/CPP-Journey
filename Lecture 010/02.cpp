#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        int i = 0;
        while(i<nums.size()){
            num = num^nums[i];
            i++;
        }
        return num;
    }
};

int main(){
    
    return 0;
}