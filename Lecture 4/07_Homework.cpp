#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    int k = 0;

    while (i<n+1)
    {
        int j = 1;
        while (j<i+1)
        {
            cout<<i+j-1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}