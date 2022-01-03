#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    int diff = s[1] - s[0], slope = (diff > 0 ? 1 : (diff < 0 ? -1 : 0));
    if (!(diff > 0 && s[s.length() - 1] - s[s.length() - 2] < 0)) {
        cout << "NON ALPSOO";
        return 0;
    }
    for (int i = 2; i < s.length(); ++i) {
        int temp = s[i] - s[i - 1];
        if (slope == 1) {
            if (temp < 0) {
                slope = -1;
                diff = temp;
            } else if (temp == 0) {
                cout << "NON ALPSOO";
                return 0;
            } else if (temp > 0 && temp != diff) {
                cout << "NON ALPSOO";
                return 0;
            }
        } else if (slope == -1) {
            if (temp > 0) {
                slope = 1;
                diff = temp;
            } else if (temp == 0) {
                cout << "NON ALPSOO";
                return 0;
            } else if (temp < 0 && temp != diff) {
                cout << "NON ALPSOO";
                return 0;
            }
        }
    }
    cout << "ALPSOO";
    return 0;
}