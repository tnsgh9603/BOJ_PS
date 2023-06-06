#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N;
    cin >> N >> ws;
    while (N--) {
        string s, t;
        getline(cin, s);
        set<string> S;
        while (getline(cin, t) && t != "what does the fox say?") {
            stringstream in(t);
            in >> t >> t >> t;
            S.insert(t);
        }
        stringstream in(s);
        while (in >> t) {
            if (!S.count(t)) {
                cout << t << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}