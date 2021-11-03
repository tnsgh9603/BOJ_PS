#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int arr[1001];

int main() {
    fastio;
    int N, M;
    cin >> N >> M;
    for (int m = 0; m < M; ++m) {
        cin >> arr[m];
    }
    sort(arr, arr + M);
    int r = 0, profit = 0;
    for (int i = 0; i < M; ++i) {
        if (min(N, M - i) * arr[i] > profit) {
            profit = min(N, M - i) * arr[i];
            r = arr[i];
        }
    }
    cout << r << " " << profit;
    return 0;
}