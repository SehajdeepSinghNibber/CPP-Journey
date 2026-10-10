#include <bits/stdc++.h>
using namespace std;

int main(){
    
    cout<<"WELCOME TO FIBONACCI GENERATOR"<<endl;

    int n;

    cin>>n;
    int a = 0;
    int b = 1;

    if(n==1){
        cout<<0;
    }

    else if(n==2){
        cout<<0<<" "<<1;
    }

    else{

        cout<<0<<" "<<1;

        for (int i = 3; i <= n; i++)
        {
            int nextNumber = a+b;

            cout<<" "<<nextNumber<<" ";

            a = b;
            b = nextNumber;
        }
    }
    

    return 0;
}