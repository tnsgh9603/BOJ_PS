#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

char alpha[27];
int cnt = 1;
string s[30];

int main() {
    fastio;
    int N;
    cin >> N;
    while (N != 0) {
        cout << "year " << cnt << "\n";
        cin >> alpha;
        for (int i = 0; i < N; ++i) {
            cin >> s[i];
            for (int j = 0; j < s[i].length(); ++j) {
                for (int k = 0; k < 26; ++k) {
                    if (s[i][j] == alpha[k]) {
                        s[i][j] = k + 'A';
                        break;
                    }
                }
            }
        }
        sort(s, s + N);
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < s[i].length(); ++j) {
                for (int k = 0; k < 26; ++k) {
                    if (s[i][j] - 'A' == k) {
                        s[i][j] = alpha[k];
                        break;
                    }
                }
            }
            cout << s[i] << "\n";
        }
        cin >> N;
        ++cnt;
    }
    return 0;
}