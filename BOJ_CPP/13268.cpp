#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    int total = 0, now = 0;
    while (1) {
        for (int i = 1; i <= 4; ++i) {
            for (int j = 1; j <= i; ++j) {
                now += min(5, n - total);
                total += min(5, n - total);
                if (total == n) {
                    if (now == 0) {
                        cout << 0;
                    } else if (0 < now and now <= 5) {
                        cout << 1;
                    } else if (5 < now and now <= 10) {
                        cout << 2;
                    } else if (10 < now and now <= 15) {
                        cout << 3;
                    } else if (15 < now and now <= 20) {
                        cout << 4;
                    }
                    return 0;
                }
            }
            for (int j = i; j >= 1; --j) {
                now -= min(5, n - total);
                total += min(5, n - total);
                if (total == n) {
                    if (now == 0) {
                        cout << 0;
                    } else if (0 < now and now <= 5) {
                        cout << 1;
                    } else if (5 < now and now <= 10) {
                        cout << 2;
                    } else if (10 < now and now <= 15) {
                        cout << 3;
                    } else if (15 < now and now <= 20) {
                        cout << 4;
                    }
                    return 0;
                }
            }
        }
    }
}
​