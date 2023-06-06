#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N;
    cin >> N;
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        string s;
        cin >> s;
        if (s == "he" || s == "she" || s == "him" || s == "her") {
            ++ans;
        }
    }
    cout << ans;
    return 0;
}
