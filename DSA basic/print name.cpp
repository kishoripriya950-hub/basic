// Print Name N times using Recursion
#include<bits/stdc++.h>
using namespace std;

void printName(int n) {
    if(n == 0)
    return;

    cout << "Kishori" << endl;
    printName(n-1);
}

int main() {
    int n;
    cout<< " ";
    cin >> n;

    printName(n);
    return 0;
}
