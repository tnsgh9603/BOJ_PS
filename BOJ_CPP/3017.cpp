// 골뱅이 찍기 - 뒤집힌 ㅋ
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 5 * n; ++j) {
            cout << "@";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "@";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 5 * n; ++j) {
            cout << "@";
        }
        cout << "\n";
    }
    for (int i = 0; i < 2 * n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "@";
        }
        cout << "\n";
    }
    return 0;
}