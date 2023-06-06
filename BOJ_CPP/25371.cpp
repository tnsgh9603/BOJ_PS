#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    string s = "";
    while (n) {
        s += to_string(n % k);
        n -= n % k;
        n /= k;
    }
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '0') {
            s[i] = ' ';
        }
    }
    stringstream ss(s);
    long long sum = 0, temp;
    while (ss >> temp) {
        sum += temp;
    }
    string ans = "";
    while (sum) {
        ans += to_string(sum % k);
        sum -= n % k;
        sum /= k;
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}