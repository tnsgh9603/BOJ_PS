#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr1[1'200'001];

int main() {
    fastio;
    int N, Q, cnt = 0;
    cin >> N >> Q;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        while (x--) {
            arr1[cnt++] = i;
        }
    }
    for (int i = 0; i < Q; ++i) {
        int x;
        cin >> x;
        cout << arr1[x] + 1 << "\n";
    }
    return 0;
}