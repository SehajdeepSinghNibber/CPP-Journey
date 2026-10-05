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
        k=i;
        while (j<i+1)
        {
            cout<<k<<" ";
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}