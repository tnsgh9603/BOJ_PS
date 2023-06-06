#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, l;
    cin >> n >> l;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < l; ++j) {
            string s = v[i];
            for (int k = 0; k < 26; ++k) {
                s[j] = 'A' + k;
                if (s == "STORE") {
                    s = "STORE";
                }
                bool flag = 1;
                for (int q = 0; q < n; ++q) {
                    if (i == q) {
                        continue;
                    }
                    int cnt = 0;
                    for (int w = 0; w < l; ++w) {
                        if (s[w] != v[q][w]) {
                            ++cnt;
                        }
                    }
                    if (cnt > 1) {
                        flag = 0;
                        goto hell;
                    }
                }
                if (flag) {
                    cout << s;
                    return 0;
                }
                hell:;
            }
        }
    }
    cout << "CALL FRIEND";
    return 0;
}