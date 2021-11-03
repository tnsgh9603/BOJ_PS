#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

typedef long long ll;
map<ll, int> mp;
int main() {
    fastio;
    int N, mx = 0;
    ll d;
    cin >> N;
    while (N--) {
        cin >> d;
        ++mp[d];
    }
    for (auto e : mp) {
        if (mx < e.second) {
            mx = e.second;
            d = e.first;
        }
    }
    cout << d;
    return 0;
}