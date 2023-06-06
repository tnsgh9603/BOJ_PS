#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k, cnt = 0;
    cin >> n >> k;
    while (n--) {
        int temp;
        cin >> temp;
        while (temp % 2 == 0) {
            ++cnt;
            temp /= 2;
        }
    }
    cout << (cnt >= k ? 1 : 0) << "\n";
    return 0;
}