#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    int k = n;

    while(i<=n){
        int j = 1;
        while(j<=i){
            char value = 'A'+k-j;
            cout<<value<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}