#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int sol(string s) {
    int cnt = 0;
    for (int i = 0; i < s.length(); ++i) {
        cnt += s.at(i) - '0';
    }
    return cnt * s.length();
}

int main() {
    fastio;
    string s1, s2;
    cin >> s1 >> s2;
    int num1 = sol(s1), num2 = sol(s2);
    cout << (num1 == num2 ? 0 : num1 > num2 ? 1 : 2);
    return 0;
}