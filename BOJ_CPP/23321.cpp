#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

string arr[5];

int main() {
    fastio;
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < arr[0].size(); ++i) {
        if (arr[0][i] == 'o') {
            for (int j = 0; j < 5; ++j) {
                arr[j][i] = ".omln"[j];
            }
        } else if (arr[1][i] == 'o') {
            for (int j = 0; j < 5; ++j) {
                arr[j][i] = "owln."[j];
            }
        }
    }
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << "\n";
    }
    return 0;
}