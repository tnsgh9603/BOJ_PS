#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr[10][2];

int main() {
    fastio;
    int n, a, b, a1 = 0, b1 = 0;
    cin >> n >> a >> b;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 8 - n; ++i) {
        a1 = a1 + arr[i][0] * 3;
        b1 += (6 <= arr[i][0] + arr[i][1] ? (6 - arr[i][0]) * 3 : arr[i][1] * 3);
    }
    a += a1;
    b = b + a1 + b1;
    cout << (b >= 130 && a >= 66 ? "Nice" : "Nae ga wae");
    return 0;
}