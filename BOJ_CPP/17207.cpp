#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
string arr1[5] = {"Inseo", "Junsuk", "Jungwoo", "Jinwoo", "Youngki"};
int a[5][5], b[5][5], s[5], idx;

int main() {
    fastio;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            for (int k = 0; k < 5; ++k) {
                s[i] += a[i][k] * b[k][j];
            }
        }
        if (s[i] <= s[idx]) {
            idx = i;
        }
    }
    cout << arr1[idx];
    return 0;
}