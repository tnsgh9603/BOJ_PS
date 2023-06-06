#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    getline(std::cin, s);
    int idx1 = s.find("U"), idx2;
    for (int i = s.length() - 1; i >= 0; --i) {
        if (s.at(i) == 'F') {
            idx2 = i;
            break;
        }
    }
    for (int i = 0; i < idx1; ++i) {
        cout << "-";
    }
    cout << "U";
    for (int i = idx1 + 1; i < idx2; ++i) {
        cout << "C";
    }
    cout << "F";
    for (int i = idx2 + 1; i < s.length(); ++i) {
        cout << "-";
    }
    return 0;
}
 