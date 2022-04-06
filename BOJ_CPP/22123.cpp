#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        string a, b;
        int c;
        cin >> a >> b >> c;
        a[2] = ' ';
        a[5] = ' ';
        b[2] = ' ';
        b[5] = ' ';
        int q, w, e;
        stringstream ss1(a), ss2(b);
        ss1 >> q >> w >> e;
        int time1 = q * 3600 + w * 60 + e;
        ss2 >> q >> w >> e;
        int time2 = q * 3600 + w * 60 + e;
        if (time1 >= time2) {
            time2 += 86400;
        }
        if (time2 - time1 >= c * 60) {
            cout << "Perfect";
        } else if (time2 - time1 + 3600 >= c * 60) {
            cout << "Test";
        } else {
            cout << "Fail";
        }
        cout << "\n";
    }
    return 0;
}