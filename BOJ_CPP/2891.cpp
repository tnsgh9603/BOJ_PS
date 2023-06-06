#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr[15];

int main() {
    fastio;
    int N, M, K, a;
    cin >> N >> M >> K;
    for (int i = 0; i < M; ++i) {
        cin >> a;
        ++arr[a];
    }
    for (int i = 0; i < K; ++i) {
        cin >> a;
        if (arr[a]) {
            arr[a] = 0;
            --M;
            continue;
        }
        for (int j = a - 1; j <= a + 1; ++j) {
            if (arr[j]) {
                arr[j] = 0;
                --M;
                break;
            }
        }
    }
    cout << M;
    return 0;
}