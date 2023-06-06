#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[1001];

int main() {
    fastio;
    int q;
    cin >> q;
    while (q--) {
        int w;
        cin >> w;
        long long e = 0, r = 0;
        for (int i = 1; i <= w; ++i) {
            cin >> arr1[i];
            e += arr1[i];
        }
        for (int i = 1; i <= w; ++i) {
            if (arr1[i] * w > e) {
                ++r;
            }
        }
        e = (10000 * e / w + 5) / 10;
        r = (1000000 * r / w + 5) / 10;
        cout << fixed << setprecision(3) << e / 1000 << "." << setw(3) << setfill('0') << e % 1000 << " " << r / 1000
             << "." << setw(3) << setfill('0') << r % 1000 << "%\n";
    }
    return 0;
}