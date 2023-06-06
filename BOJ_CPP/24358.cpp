#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

// 평년
int month1[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// 윤년
int month2[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int main() {
    fastio;
    int x, n, d, m, g;
    cin >> x >> n >> d >> m >> g;
    int day = (2 * x - 1) * n - 1 + d;
    // 윤년
    if ((g % 4 == 0 && g % 100 != 0) || g % 400 == 0) {
        if (day > month2[m]) {
            day -= month2[m];
            ++m;
        }
    }
    // 윤년 X
    else {
        if (day > month1[m]) {
            day -= month1[m];
            ++m;
        }
    }
    if(m > 12) {
        m = 1;
        ++g;
    }
    cout << day << " " << m << " " << g;
    return 0;
}