#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[1501][4];

int main() {
    fastio;
    int N, A = 0, B = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    for (int i = 0; i < N; ++i) {
        if (arr[i][1] <= 4) {
            A += 100;
            for (int u = i - 1; u >= 0; --u) {
                if (arr[i][0] <= arr[u][0] + 10 && arr[i][1] == arr[u][1]) {
                    A += 50;
                    u = -1;
                }
            }
        } else {
            B += 100;
            for (int j = i - 1; j >= 0; --j) {
                if (arr[i][0] <= arr[j][0] + 10 && arr[i][1] == arr[j][1]) {
                    B += 50;
                    j = -1;
                }
            }
        }
    }
    cout << A << " " << B;
    return 0;
}
