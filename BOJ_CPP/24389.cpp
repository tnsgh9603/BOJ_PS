#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    string s = "", temp = "", copy;
    stack<char> st;
    while (n) {
        int t = n % 2;
        st.push(t >= 10 ? t - 10 + 'A' : t + '0');
        n /= 2;
    }
    while(!st.empty()) {
        s += st.top();
        st.pop();
    }
    for (int i = 0; i < 32 - s.length(); ++i) {
        temp += "0";
    }
    s = temp + s;
    copy = s;
    for (int i = 0; i < 32; ++i) {
        if (s[i] == '0') {
            s[i] = '1';
        } else {
            s[i] = '0';
        }
    }
    for (int i = 31; i >= 0; --i) {
        if (s[i] == '0') {
            s[i] = '1';
            break;
        } else {
            s[i] = '0';
        }
    }
    int cnt = 0;
    for (int i = 0; i < 32; ++i) {
        if (copy[i] != s[i]) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}