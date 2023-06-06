#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    ll n, k;
    cin >> n >> k;
    vector<int> v1(n);
    for (ll i = 0; i < n; ++i) {
        cin >> v1[i];
    }
    ll cnt = 0;
    while (!is_sorted(v1.begin(), v1.end())) {
        ++cnt;
        priority_queue<ll> pq;
        ll j = 0;
        vector<int> v2;
        for (ll i = 0; i < n; ++i) {
            while (pq.size() < k && j < n) {
                pq.push(-v1[j]);
                ++j;
            }
            v2.push_back(-pq.top());
            pq.pop();
        }
        v1 = v2;
    }
    cout << cnt;
    return 0;
}