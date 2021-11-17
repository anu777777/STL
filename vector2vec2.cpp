#include<bits/stdc++.h>
using namespace std;

void PrintVec(vector<int> &v) {
    cout <<"SIZE: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] <<" ";
    }
    cout << endl;
}

int main() {
    int N;
    cout <<"ENTER THE NUMBER OF VECTORS: ";
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; ++i) {
        int n;
        cout <<"ENTER THE NUMBER OF ITEMS IN A VECTOR: ";
        cin >> n;
        v.push_back(vector<int> ());
        for (int j = 0; j < n; ++j) {
            cout <<"ENTER THE ELEMENTS IN THE VECTOR: ";
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    for (int i = 0; i < v.size(); ++i) {
        PrintVec(v[i]);
    }
    return 0;
}