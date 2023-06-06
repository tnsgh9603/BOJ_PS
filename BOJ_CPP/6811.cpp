#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d, cnt = 0;
    cin >> a >> b >> c >> d;
    for (int i = 0; i * a <= d; ++i) {
        for (int j = 0; i * a + j * b <= d; ++j) {
            for (int k = 0; i * a + j * b + k * c <= d; ++k) {
                if (i + j + k == 0) {
                    continue;
                }
                cout << i << " Brown Trout, " << j << " Northern Pike, " << k << " Yellow Pickerel\n";
                ++cnt;
            }
        }
    }
    cout << "Number of ways to catch fish: " << cnt;
    return 0;
}