#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[], int n){
    int i=0;
    int j=1;

    while(i<n-1){
        swap(arr[i],arr[j]);
        i+=2;
        j+=2;
    }

}

int main(){
    
    int arr[5] = {1,2,3,4,5};
    int arr2[6]= {1,2,3,4,5,6};

    swapAlternate(arr, 5);
    swapAlternate(arr2, 6);

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << endl;

    for (int i = 0; i < 6; i++)
        cout << arr2[i] << " ";

    return 0;
}