#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[51];

int main() {
    fastio;
    int N, L, H;
    cin >> N >> L >> H;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    double ans = 0;
    for (int i = L; i < N - H; ++i) {
        ans += arr[i];
    }
    cout << setprecision(10) << (ans / (N - H - L));
    return 0;
}