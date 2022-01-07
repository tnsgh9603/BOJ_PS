#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool arr[101];

int main() {
    fastio;
    int N, Q;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cin >> arr[i];
    }
    cin >> Q;
    while (Q--) {
        int S, T;
        cin >> S >> T;
        if (S - 2) {
            for (int i = T; i <= N; i += T) {
                arr[i] ^= 1;
            }
        } else {
            for (S = 0; S < T and T + S <= N; ++S) {
                if (arr[T - S] ^ arr[T + S]) {
                    break;
                }
            }
            for (int i = T - S + 1; i < T + S; ++i) {
                arr[i] ^= 1;
            }
        }
    }
    for (int i = 1; i <= N; ++i) {
        cout << arr[i] << " ";
        if (i % 20 == 0) {
            cout << '\n';
        }
    }
    return 0;
}