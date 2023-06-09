#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int y[101], w[101], r[101];
int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        y[i] = 0;
        w[i] = 1;
    }

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            int m;
            cin >> m;
            y[j] += m;
        }
        for (int j = 0; j < n; j++) {
            int t = 1;
            for (int p = 0; p < n; p++)
                if (p != j && y[p] > y[j])
                    t++;
            if (t > w[j])
                w[j] = t;
            r[j] = t;
        }
    }
    for (int j = 0; j < n; j++)
        if (r[j] == 1)
            cout << "Yodeller "  <<  (j + 1) << " is the TopYodeller: score " << y[j]  <<  ", worst rank " << w[j] << "\n";
}