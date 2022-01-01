#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long sum = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        sum += stoi(s);
        rotate(s.rbegin(), s.rbegin() + 1, s.rend());
    }
    cout << sum;
    return 0;
}