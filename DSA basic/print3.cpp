// print from N to 1(by backtrack)
#include<bits/stdc++.h>
using namespace std;
void print3(int i) {
    if(i < 1)
    return;

    print3(i-1);
    cout << i << endl;
}
int main() {
    int n;
    cout << " ";
    cin >> n;

    print3(n);
    return 0;
}