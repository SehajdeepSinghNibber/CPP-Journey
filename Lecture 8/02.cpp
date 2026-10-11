#include <iostream>
using namespace std;

long long nCr(int n, int r) {
    long long factN = 1, factR = 1, factNR = 1;

    for (int i = 1; i <= n; i++)
        factN *= i;

    for (int i = 1; i <= r; i++)
        factR *= i;

    for (int i = 1; i <= n - r; i++)
        factNR *= i;

    return factN / (factR * factNR);
}

int main() {
    cout << nCr(5, 2);
}