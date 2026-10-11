
#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int target, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int target = 30;

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << linearSearch(arr, target, n);

    return 0;
}
