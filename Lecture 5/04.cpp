#include <bits/stdc++.h>
using namespace std;

int main(){
    
    cout<<"Prime Number Generator!!\n";

    int n;

    cin>>n;

    if (n < 2) {
        cout << "It is not a Prime Number";
        return 0;
    }

    for(int i = 2; i<n; i++){
        if(n%i== 0){
            cout<<"It is not a Prime Number";
            return 0;
        }
    }

    cout<<"It is a Prime Number";

    return 0;
}