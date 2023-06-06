#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int is_prime[5];

int main() {
    fastio;
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for (auto i: s) {
        if (++is_prime[i - 'A'] == 1) {
            ++cnt;
        }
    }
    cout << (cnt >= 3 ? "Yes" : "No");
    return 0;
}