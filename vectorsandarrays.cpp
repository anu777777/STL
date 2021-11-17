#include<bits/stdc++.h>
using namespace std;

void PrintVec(vector<int> &v) {
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

//first [] of this is row which is fixed but second [] of this is a column which isn't fixed
int main() {
    cout << "ENTER THE NUMBER OF VECTORS: ";
    int N; //number of vectors taken as input
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; ++i) {
        int n;
        cout << "ENTER THE NUMBER OF INPUTS OF AN ARRAY: ";
        cin >> n;
        cout << "ENTER THE ELEMNETS IN THE VECTOR: ";
        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; ++i) {
        PrintVec(v[i]);
    }
    return 0;
}