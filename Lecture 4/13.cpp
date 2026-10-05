#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;

    while(i<=n){
        char a = 65;
        int j = 1;
        while(j<=i){
            cout<<a<<" ";
            j++;
            a++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}