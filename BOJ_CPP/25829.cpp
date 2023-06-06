#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        cnt1 += b;
        cnt3 += c;
        if (b > c) {
            cnt2 += a;
        } else if (b < c) {
            cnt4 += a;
        }
    }
    cout << (cnt1 > cnt3 && cnt2 > cnt4 ? 1 : cnt1 < cnt3 && cnt2 < cnt4 ? 2 : 0);
    return 0;
}