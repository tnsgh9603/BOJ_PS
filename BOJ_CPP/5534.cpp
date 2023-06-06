#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n, len, ans;
string a, b;

int main() {
    fastio;
    int i, j, k, x, d;
    cin >> n >> a;
    len = a.size();
    while (n--) {
        cin >> b;
        for (i = 0; b[i]; ++i)
            if (b[i] == a[0]) {
                for (j = i + 1; b[j]; ++j)
                    if (b[j] == a[1]) {
                        d = j - i;
                        for (k = j + d, x = 2; k < b.size() && x < len; k += d, ++x) {
                            if (b[k] != a[x]) {
                                break;
                            }
                        }
                        if (x == len) {
                            ++ans;
                            i = j = 999;
                        }
                    }
            }
    }
    cout << ans;
    return 0;
}