#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[30][30];
string s[300];

int main() {
    fastio;
    for (int i = 0; i < 36; ++i) {
        cin >> s[i];
    }
    for (int i = 0; i < 36; ++i) {
        int x = s[i][0] - 'A', y = s[i][1] - '1', nx = s[(i + 1) % 36][0] - 'A', ny = s[(i + 1) % 36][1] - '1';
        if (arr[x][y] == 0) {
            arr[x][y] = 1;
        } else {
            cout << "Invalid";
            return 0;
        }
        if (abs(nx - x) > 2 || abs(ny - y) > 2 || abs(nx - x) + abs(ny - y) != 3) {
            cout << "Invalid";
            return 0;
        }
    }
    cout << "Valid";
    return 0;
}