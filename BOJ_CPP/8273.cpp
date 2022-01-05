#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<tuple<int, int, int>> v(n);
    for (auto&[a, b, c]: v) {
        cin >> b >> c;
        a = b + c;
    }
    sort(v.begin(), v.end());
    int temp = get<0>(v[0]), prev = temp / 2, cnt = 0;
    for (int i = 1; i < n; ++i) {
        temp = get<0>(v[i]);
        if(prev < temp) {
            prev = temp - prev;
            ++cnt;
        }
        else {
            break;
        }
    }
    cout << cnt;
    return 0;
}