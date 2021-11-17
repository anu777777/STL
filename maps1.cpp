#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> &mp) {
    for (auto &pr: mp) {
        cout << pr.first <<" " << pr.second << endl;
    }
}

int main() {
    map<int, string> mp;
    mp[0] = "abc";
    mp[1] = "bcd";
    mp[4] = "def";
    mp.insert({3, "ghi"});
    map<int, string> :: iterator it;
    for (it = mp.begin(); it != mp.end(); ++it) {
        cout << (*it).first <<" "<<(*it).second << endl;
    }
    print(mp);
    return 0;
}
// In maps the values are stored in increasing order!