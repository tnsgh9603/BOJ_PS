#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    int c = 1;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        if (t == c) {
            ++c;
        }
    }
    cout << n - c + 1;
    return 0;
}