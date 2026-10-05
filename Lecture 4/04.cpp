#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;

    while (i<n+1)
    {
        int j = 1;
        while (j<i+1)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}