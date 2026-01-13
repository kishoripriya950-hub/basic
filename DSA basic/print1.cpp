// print Linearly from 1 to N(but by backtrack)
#include<bits/stdc++.h>
using namespace std;
void print1(int i, int n) {
    if(i < 1)
    return;
   
    print1(i-1, n);
    cout << i << endl;
}
int main() {
    int n;
    cout << " ";
    cin >> n;

    print1(n, n);
    return 0;
}