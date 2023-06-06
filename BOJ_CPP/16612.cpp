#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long n, l, sum = 0;
    cin >> n >> l;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        sum += s.length();
    }
    if (l < sum) {
        cout << "No";
    } else {
        if (n == 1) {
            if (l == sum) {
                cout << "Yes";
            } else {
                cout << "No";
            }
        } else if (l == sum) {
            cout << "No";
        } else if ((l - sum) % (n - 1)) {
            cout << "No";
        } else {
            cout << "Yes";
        }
    }
    return 0;
}