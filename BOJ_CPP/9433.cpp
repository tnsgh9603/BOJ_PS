#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[21];

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        for (int i = 0; i < 20; ++i) {
            cin >> arr[i];
        }
        for (int i = 19; i > 0; --i) {
            if (arr[i] % 2 == 0) {
                arr[i - 1] += arr[i] / 2;
                arr[i] = 0;
            } else {
                arr[i - 1] += arr[i] / 2;
                arr[i] = 1;
            }
        }
        for (int i = 0; i < 20; ++i) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}