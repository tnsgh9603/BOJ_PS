#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s, a, b;
    getline(cin, s);
    stringstream ss(s);
    ss >> a;
    while (ss >> b) {
        cout << a;
        for (int i = b.size() - 2; i >= 0; --i) {
            if (b[i] == ']') {
                cout << "[]";
                --i;
            } else if (b[i] == '&' || b[i] == '*') {
                cout << b[i];
            } else {
                cout << " ";
                for (int j = 0; j <= i; ++j) {
                    cout << b[j];
                }
                cout << ";\n";
                break;
            }
        }
    }
    return 0;
}