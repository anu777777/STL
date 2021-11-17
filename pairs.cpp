#include <bits/stdc++.h>
using namespace std;

int main() {
    pair <int, string> p;
    // p = make_pair(1, "abc");
    p = {1, "cde"};
    pair <int, string> &p1 = p; //this will get changed but just p1 won't
    p1.first = 3;
    cout << p.first <<" " << p.second << endl;
    //declaring array of pairs
    pair <int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; ++i) {
        cout << p_array[i].first <<" "<< p_array[i].second << endl;
    }
    return 0;
}