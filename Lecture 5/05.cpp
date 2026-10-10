#include <bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Skip Divisible of 5"<<endl;

    int n;
    cin>>n;
    
    for (int i = 0; i <=n; i++)
    {
        if(i%5==0){
            continue;
        }
        cout<<i<<endl;
    }
    

    return 0;
}