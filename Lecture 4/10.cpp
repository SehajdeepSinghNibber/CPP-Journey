#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;

    while(i<=n){
        int j = 1;
        char a = 65;
        while(j<=n){
            cout<<a<<" ";
            j++;
            a++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}