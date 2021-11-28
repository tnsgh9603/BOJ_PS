#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n >> ws;
    while (n--) {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == ',') {
                s[i] = ' ';
            }
        }
        int year;
        stringstream ss(s);
        vector<int> v;
        while (ss >> year) {
            v.push_back(year);
        }
        for (auto i: v) {
            if (i % 400 == 0) {
                cout << i << " ";
            } else if (i % 100 == 0) {
            } else if (i % 4 == 0) {
                cout << i << " ";
            }
        }
    }
    return 0;
}