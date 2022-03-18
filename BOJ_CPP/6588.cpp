#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool arr[1'000'001] = {1, 1,};

int main() {
    fastio;
    for (int i = 2; i <= 1000; ++i) {
        if (!arr[i]) {
            for (int j = i * i; j < 1'000'001; j += i) {
                arr[j] = 1;
            }
        }
    }
    int n;
    while (cin >> n && n) {
        for (int i = 3; i <= n / 2; i += 2) {
            if (!arr[i] && !arr[n - i]) {
                cout << n << " = " << i << " + " << n - i << "\n";
                break;
            }
        }
    }
    return 0;
}