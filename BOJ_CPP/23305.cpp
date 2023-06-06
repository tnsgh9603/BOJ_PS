#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[1'000'001];

int main() {
    fastio;
    int n, x, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        ++arr[x];
    }
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (arr[x] != 0) {
            ++cnt;
            --arr[x];
        }
    }
    cout << n - cnt;
    return 0;
}