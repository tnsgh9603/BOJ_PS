#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, ans = 0;
    cin >> n;
    for (int j = 0; j < n; ++j) {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '/') {
                s[i] = ' ';
            }
        }
        stringstream ss1(s);
        string temp1;
        vector<pair<int,int>> v;
        while (ss1 >> temp1) {
            for (int i = 0; i < temp1.length(); ++i) {
                if (temp1[i] == ':') {
                    temp1[i] = ' ';
                }
            }
            stringstream ss2(temp1);
            int a, b;
            ss2 >> a >> b;
            v.push_back({a,b});
        }
        long long sum1 = 0, sum2 = 0;
        if (j & 1) {
            for (int i = 0; i < 3; ++i) {
                sum1 += v[i].first - '0';
                sum2 += v[i].second - '0';
            }
            if (sum2 > sum1) {
                ans += 3;
            } else if (sum2 == sum1) {
                sum1 += v[3].first  - '0';
                sum2 += v[3].second - '0';
                if (sum2 > sum1) {
                    ans += 2;
                } else if (sum1 == sum2) {
                    sum1 += v[4].first  - '0';
                    sum2 += v[4].second - '0';
                    if (sum2 > sum1) {
                        ++ans;
                    }
                } else {
                    ++ans;
                }
            }
        } else {
            for (int i = 0; i < 3; ++i) {
                sum1 += v[i].first  - '0';
                sum2 += v[i].second - '0';
            }
            if (sum1 > sum2) {
                ans += 3;
            } else if (sum1 == sum2) {
                sum1 += v[3].first  - '0';
                sum2 += v[3].second - '0';
                if (sum1 > sum2) {
                    ans += 2;
                } else if (sum1 == sum2) {
                    sum1 += v[4].first  - '0';
                    sum2 += v[4].second - '0';
                    if (sum1 > sum2) {
                        ++ans;
                    }
                } else {
                    ++ans;
                }
            }
        }
    }
    cout << ans;
    return 0;
}