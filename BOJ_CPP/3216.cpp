#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<pair<int, int>> V;
    while (n--) {
        int d, v;
        cin >> d >> v;
        V.push_back({d, v});
    }
    int now = V[0].second, temp = V[0].first, ans = V[0].second;
    for (int i = 1; i < V.size(); ++i) {
        // 여유 시간이 더 많으면(끊기지 않을 때)
        if (temp >= V[i].second) {
            temp += V[i].first - V[i].second;
            now += V[i].second;
        }
            // 끊길 때
        else {
            ans += V[i].second - temp;
            temp = V[i].first;
            now += V[i].second;
        }
    }
    cout << ans;
    return 0;
}