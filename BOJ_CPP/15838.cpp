#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr1[4], arr1;

int main() {
    fastio;
    int tc = 1;
    while (cin >> arr1 && arr1) {
        int c = 0, b = 0, l = 0, sum = 0;
        for (int i = 0; i < arr1; ++i) {
            for (int j = 0; j < 4; ++j) {
                cin >> arr1[j];
            }
            c += arr1[0];
            b += arr1[1];
            l += arr1[2];
            sum += arr1[3];
        }
        cout << fixed << setprecision(2) << "Case #" << tc++ << ": RM"
             << 0.8 * c - 15.5 * c / 85 + 1.0 * b - 32.0 * b / 85 + 1.2 * l - 40.0 * l / 85 + 0.6 * sum << "\n";
    }
    return 0;
}