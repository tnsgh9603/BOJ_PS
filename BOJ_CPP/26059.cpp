#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

pair<int, int> Read() {
    string s;
    cin >> s;
    s[s.size() - 3] = ' ';
    stringstream ss;
    ss << s;
    int a, b;
    ss >> a >> b;
    return {a, b};
}

int main() {
    fastio;
    int n;
    cin >> n;
    auto p = Read();
    pair<int, int> mx = {-1, -1};
    string best = "-1";
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        auto q = Read();
        if (q.first <= p.first && q.second <= p.second) {
            if (q > mx) {
                mx = q;
                best = s;
            }
        }
    }
    cout << best;
    return 0;
}
