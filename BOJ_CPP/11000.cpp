#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    pq.push(v[0].second);
    for (int i = 1; i < n; ++i) {
        pq.push(v[i].second);
        int n = pq.top();
        cout << n << "\n";
        // 다음 수업을 같은 강의실에서 이어갈 수 있다면
        if (pq.top() <= v[i].first) {
            pq.pop();
        }
    }
    cout << pq.size();
    return 0;
}