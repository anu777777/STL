#include <bits/stdc++.h>
using namespace std;

void PrintVec(vector<int> &V) {
    cout << "Size: " << V.size() << endl;
    for (int i = 0; i < V.size(); ++i) {
        cout << V[i] <<" ";
    }
    cout<<"\n";
    V.push_back(5);
}

int main() {
    vector<int> V;
    V.push_back(7);
    V.push_back(8);
    vector<int> v2 = V; //a copy is made
    //vector<int> &v2 = V; //a refrence is passed, actual vector v is assigned
    v2.push_back(6);
    PrintVec(V);
    PrintVec(V);
    PrintVec(v2);
    return 0;
}
