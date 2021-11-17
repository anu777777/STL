#include<bits/stdc++.h>
using namespace std;

void printVec(vector <int> v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] <<" ";
    }
}

int main() {
    vector <int> V(10, 3); //vector of size 10 initialized with 3, if nothing is provided default value is 0
    V.push_back(9); //both push_back and pop_back takes 0(1) time 
    printVec(V);
    cout << "\n";
    V.pop_back();
    printVec(V);
    return 0;
}