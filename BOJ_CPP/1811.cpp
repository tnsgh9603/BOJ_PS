#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string a, b;
    while (cin >> a >> b && a != "#") {
        int len = a.length(), t1 = 0, t2 = 0, t3 = 0;
        string temp = b;
        for (int i = 0; i < len; ++i) {
            if (a[i] == b[i]) {
                ++t1;
                a[i] = b[i] = '_';
            }
        }
        for (int i = 0; i < len; ++i) {
            if (a[i] != '_') {
                if (i && a[i] == b[i - 1]) {
                    ++t2;
                    a[i] = b[i - 1] = '_';
                } else if (i + 1 < len && a[i] == b[i + 1]) {
                    ++t2;
                    a[i] = b[i + 1] = '_';
                }
            }
        }
        for (int i = 0; i < len; ++i) {
            if (a[i] != '_') {
                for (int j = 0; j < len; ++j) {
                    if (a[i] == b[j]) {
                        ++t3;
                        a[i] = b[j] = '_';
                        break;
                    }
                }
            }
        }
        cout << temp << ": " << t1 << " black, " << t2 << " grey, " << t3 << " white\n";
    }
    return 0;
}