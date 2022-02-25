#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    string q;
    cin >> n >> q;
    while (n--) {
        string s;
        cin >> s;
        int x = 0, qe = q.length() - 1, se = s.length() - 1;
        while (x < qe && x < se && q[x] == s[x]) {
            ++x;
        }
        while (x <= qe && x <= se && q[qe] == s[se]) {
            --qe;
            --se;
        }
        cout << (x == qe ? "DA" : "NE") << "\n";
    }
    return 0;
}