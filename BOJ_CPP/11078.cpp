#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s1, s2;
    cin >> s1 >> s2;
    int sum = 0, idx = 0;
    for (int i = 0; i < s2.length(); ++i) {
        sum += (islower(s2[i]) ? s2[i] - 'a' : s2[i] - 'A') + 1;
    }
    if (sum != s1.length()) {
        cout << "non sequitur";
        return 0;
    }
    sum = 0;
    for (int i = 0; i < s2.length(); ++i) {
        if (islower(s2[i])) {
            int temp = s2[i] - 'a' + 1;
            for (int j = idx; j < idx + temp; ++j) {
                sum += s1[j] - '0';
            }
            idx += temp;
        }
        else {
            idx += s2[i] - 'A' + 1;
        }
    }
    cout << sum;
    return 0;
}