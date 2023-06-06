#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    cout << "int a;\n";
    for (int i = 1; i <= n; ++i) {
        cout << "int ";
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << "ptr";
        if (i != 1) {
            cout << i;
        }
        cout << " = " << "&";
        if (i == 1) {
            cout << "a";
        } else {
            cout << "ptr";
        }
        if (i != 1) {
            if (i - 1 != 1) {
                cout << i - 1;
            }
        }
        cout << ";\n";
    }
    return 0;
}