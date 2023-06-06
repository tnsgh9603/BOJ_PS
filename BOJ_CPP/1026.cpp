#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N, A[101], B[101], ans = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }
    sort(A, A + N);
    sort(B, B + N);
    for (int i = 0; i < N; ++i) {
        ans += A[i] * B[N - 1 - i];
    }
    cout << ans;
    return 0;
}