#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr1[101];

int main() {
    fastio;
    int K;
    cin >> K;
    for (int tc = 1; tc <= K; ++tc) {
        int n, w;
        cin >> n >> w;
        for (int i = 0; i < n; ++i) {
            cin >> arr1[i];
        }
        int mx = -INT_MAX, mn = INT_MAX;
        for (int i = 0; i < n - w + 1; ++i) {
            int sum = 0;
            for (int j = i; j < i + w; ++j) {
                sum += arr1[j];
            }
            mx = max(sum, mx);
            mn = min(sum, mn);
        }
        cout << "Data Set " << tc << ":\n" << mx / w - mn / w << "\n\n";
    }
    return 0;
}