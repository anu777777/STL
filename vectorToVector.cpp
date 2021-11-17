#include<bits/stdc++.h>
using namespace std;

void PrintVec(vector<int> &v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] <<" ";
    }
    cout << endl;
}

int main() {
    int N;
    cout << "ENTER THE NUMBER OF VECTORS: "<<endl;
    cin >> N;
    vector<vector<int>> V;
    for (int i = 0; i < N; i++) {
        int n;
        cout << "ENTER THE NUMBER OF ELEMENTS IN A VECTOR: "<<endl;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            int number;
            cout << "ENTER THE NUMBER: "<<endl;
            cin >> number;
            temp.push_back(number);
        }
        V.push_back(temp);
    }

    for (int i = 0; i < V.size(); i++) {
        PrintVec(V[i]);
    }
    return 0;
}