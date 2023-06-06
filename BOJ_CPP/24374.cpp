#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;

    map<char, int> mp;
    for (int i = 0; i < 26; ++i) {
        mp['A' + i] = 10 + i;
    }

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '+' || s[i] == '=') {
            s[i] = ' ';
        }
    }

    vector<string> v;
    string temp, s1, s2, s3;
    stringstream ss(s);
    int mx = 0;
    while (ss >> temp) {
        v.push_back(temp);
        for (int i = 0; i < temp.length(); ++i) {
            if (isdigit(temp[i])) {
                mx = max(mx, temp[i] - '0');
            } else if (isalpha(temp[i])) {
                mx = max(mx, temp[i] - 'A');
            }
        }
    }
    s1 = v[0], s2 = v[1], s3 = v[2];
    for (int i = mx + 1; i <= 36; ++i) {
        long long sum1 = 0, sum2 = 0, sum3 = 0;
        for (int j = s1.length() - 1; j >= 0; --j) {
            long long ret = 1;
            for (int k = 1; k <= s1.length() - 1 - j; ++k) {
                ret *= i;
            }
            if (isdigit(s1[j])) {
                sum1 += ret * (s1[j] - '0');
            } else if (isalpha(s1[j])) {
                sum1 += ret * mp[s1[j]];
            }
        }
        for (int j = s2.length() - 1; j >= 0; --j) {
            long long ret = 1;
            for (int k = 1; k <= s2.length() - 1 - j; ++k) {
                ret *= i;
            }
            if (isdigit(s2[j])) {
                sum2 += ret * (s2[j] - '0');
            } else if (isalpha(s2[j])) {
                sum2 += ret * mp[s2[j]];
            }
        }
        for (int j = s3.length() - 1; j >= 0; --j) {
            long long ret = 1;
            for (int k = 1; k <= s3.length() - 1 - j; ++k) {
                ret *= i;
            }
            if (isdigit(s3[j])) {
                sum3 += ret * (s3[j] - '0');
            } else if (isalpha(s3[j])) {
                sum3 += ret * mp[s3[j]];
            }
        }
        if (sum1 + sum2 == sum3) {
            cout << i;
            return 0;
        }
    }
}