#include <bits/stdc++.h>
using namespace std;

void PrintVec(vector<pair<int, int>> &V) {
    cout << "Size: " << V.size() << endl;
    for (int i = 0; i < V.size(); ++i) {
        cout << V[i].first <<" "<<V[i].second << endl;
    }
}

int main() {
    vector<pair<int, int>> v;
    PrintVec(v);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k, l;
        cin >> k >> l;
        v.push_back({k, l});
    }
    PrintVec(v);
    return 0;
}