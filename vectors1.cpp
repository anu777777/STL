#include <bits/stdc++.h>
using namespace std;

void printNode(vector<int> V) {
    for (int i = 0; i < V.size(); ++i) {
        cout << V[i] <<" ";
    }
}

int main() {
    vector<int> V;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        V.push_back(num);
    }
    printNode(V);
    return 0;
}