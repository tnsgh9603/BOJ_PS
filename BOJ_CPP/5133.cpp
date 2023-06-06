#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        cout << "Data Set " << tc << ":\n";
        int I, M;
        cin >> I >> M;
        for (int i = 0; i < I; ++i) {
            int w, n, d;
            scanf("%d %d/%d", &w, &n, &d);
            int a = M * (w * d + n), b = a % d;
            cout << a / d;
            if (b > 0) {
                if (d == 4 || d == 8) {
                    while (b % 2 == 0) {
                        b /= 2;
                        d /= 2;
                    }
                }
                cout << " " << b << "/" << d;
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}