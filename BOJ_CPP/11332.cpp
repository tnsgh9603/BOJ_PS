#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        string s;
        long long N, T, L, d;
        cin >> s >> N >> T >> L;
        bool flag = 0;
        L *= 1'0000'0000;
        if (s[3] == ')') {
            flag = (N * T <= L ? 1 : 0);
        } else if (s[3] == '!') {
            d = 1;
            for (int i = 2; i <= N && d <= L; ++i) {
                d *= i;
            }
            if (d * T <= L) {
                flag = 1;
            }
        } else if (s[2] == '2') {
            d = 1;
            for (int i = 0; i < N && d <= L; ++i) {
                d *= 2;
            }
            if (d * T <= L) {
                flag = 1;
            }
        } else if (s[4] == '2') {
            flag = (N * N * T <= L ? 1 : 0);
        } else {
            flag = (N * N * N <= L / T ? 1 : 0);
        }
        cout << (flag ? "May Pass." : "TLE!") << "\n";
    }
    return 0;
}