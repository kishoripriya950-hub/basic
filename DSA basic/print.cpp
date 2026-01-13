// Print linearly from 1 to N
#include<bits/stdc++.h>
using namespace std;
void printLinear(int i, int n) {
    if(i>n)
    return;

    cout << i << endl ;
    printLinear(i+1, n);
}

int main() {
    int n;
    cout << " ";
    cin >> n;

    printLinear(1, n);
    return 0;
}