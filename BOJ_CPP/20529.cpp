#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        if (n >= 33) {
            cout << "0\n";
        } else {
            int mn = 987654321;
            for (int i = 0; i < n; ++i) {
                string s1 = v[i];
                for (int j = i + 1; j < n; ++j) {
                    string s2 = v[j];
                    for (int k = j + 1; k < n; ++k) {
                        string s3 = v[k];
                        int sum = 0;
                        for (int q = 0; q < 4; ++q) {
                            if(s1[q] != s2[q]) {
                                ++sum;
                            }
                            if(s1[q] != s3[q]) {
                                ++sum;
                            }
                            if(s2[q] != s3[q]) {
                                ++sum;
                            }
                        }
                        mn = min(sum, mn);
                    }
                }
            }
            cout << mn <<"\n";
        }
    }
    return 0;
}