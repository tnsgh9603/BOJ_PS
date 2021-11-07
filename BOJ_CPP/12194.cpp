#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool arr[10];

int recur(int x) {
    if (x < 10 && arr[x]) {
        return 1;
    } else if (x >= 10 && x < 100 && arr[x / 10] && arr[x % 10]) {
        return 2;
    } else if (x == 100 && arr[0] && arr[1]) {
        return 3;
    }
    int ret = -1;
    for (int p = 2; p < 10; ++p) {
        if (arr[p] && x % p == 0) {
            int c = recur(x / p);
            if (c != -1 && (ret == -1 || ret > c + 2)) {
                ret = c + 2;
            }
        }
    }
    return ret;
}

int main() {
    fastio;
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; ++tc) {
        for (int i = 0; i < 10; ++i) {
            cin >> arr[i];
        }
        int x;
        cin >> x;
        int temp = recur(x);
        cout << "Case #" << tc << ": " << (temp != -1 ? to_string(temp + 1) : "Impossible") << "\n";
    }
    return 0;
}