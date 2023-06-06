#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    vector<int> v;
    for (int i = 0; i < 6; ++i) {
        getline(cin, s);
        s.erase(0, s.find_first_not_of(' '));
        s.erase(s.find_last_not_of(' ') + 1);
        v.push_back(s.length());
    }
    cout << "Latitude " << v[0] << ":" << v[1] << ":" << v[2] << "\n" << "Longitude " << v[3] << ":" << v[4] << ":"
         << v[5];
    return 0;
}