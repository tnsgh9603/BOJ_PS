#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

// 평년
int month1[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// 윤년
int month2[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int y, m;
        cin >> y >> m;
        // 윤년
        if (y % 100 != 0 && y % 4 == 0 || y % 400 == 0) {
            cout << (m == 1 ? y - 1 : y) << " " << (m == 1 ? 12 : m - 1) << " " << month2[m == 1 ? 12 : m - 1] << "\n";
        }
        else {
            cout << (m == 1 ? y - 1 : y) << " " << (m == 1 ? 12 : m - 1) << " " << month1[m == 1 ? 12 : m - 1] << "\n";
        }
    }
    return 0;
}