#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    constexpr array ans = {
            "Not a pangram\n",
            "Pangram!\n",
            "Double pangram!!\n",
            "Triple pangram!!!\n"
    };
    int T;
    cin >> T >> ws;
    string s;
    array<int, 26> cnt;
    for (int t = 1; t <= T; ++t) {
        getline(cin, s);
        fill(cnt.begin(), cnt.end(), 0);
        for (const auto& c : s) {
            if (isalpha(c)) {
                ++cnt[c - (islower(c) ? 'a' : 'A')];
            }
        }
        cout << "Case " << t << ": "
             << ans[*min_element(cnt.begin(), cnt.end())];
    }
    return 0;
}