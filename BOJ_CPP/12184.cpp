#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[501][2], arr2[501];

int main() {
    fastio;
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        memset(arr1, 0, sizeof(arr1));
        memset(arr2, 0, sizeof(arr2));
        int N, P;
        cin >> N;
        for (int j = 0; j < N; ++j) {
            cin >> arr1[j][0] >> arr1[j][1];
        }
        cin >> P;
        for (int j = 0; j < P; ++j) {
            int m;
            cin >> m;
            for (int k = 0; k < N; ++k) {
                if (arr1[k][0] <= m && arr1[k][1] >= m) {
                    ++arr2[j];
                }
            }
        }
        cout << "Case #" << i + 1 << ":";
        for (int j = 0; j < P; ++j) {
            cout << " " << arr2[j];
        }
        cout << "\n";
    }
    return 0;
}
