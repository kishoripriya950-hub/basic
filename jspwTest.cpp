#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> triplet(int n, vector<int> &num) 
{
    vector<vector<int>> ans;
    sort(num.begin(), num.end());
    for(int i=0; i<n; i++) {
        if(i>0 && num[i] == num[i-1]) continue;
        int j = i+1;
        int k = n-1;
        while(j<k) {
            int sum = num[i] + num[j] + num[k];
            if(sum < 0) {
                j++;
            }
            else if(sum > 0) {
                k--;
            }
            else {
                ghgdytdfuyfydhhugiyg
            }
        }
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i=0; i<n; i++) {
        cin >> num[i];
    }
    vector<vector<int>> result = triplet(n, num);
    if(result.empty()) {
        cout << "No triplets found";
    } else {
        for(auto &vec : result) {
            for(int x: vec) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}