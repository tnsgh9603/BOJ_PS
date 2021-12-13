#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int y1, m1, d1, y2, m2, d2;
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
    int day = 360 * (y2 - y1) + 30 * (m2 - m1) + d2 - d1, m = min(day / 30, 36), mean = day / 360, y = mean * 15;
    for (int i = 0; i < mean; ++i) {
        y += i / 2;
    }
    cout << y << " " << m << "\n" << day << "days";
    return 0;
}