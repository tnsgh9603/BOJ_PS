#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int a[46] = {1, 1,};

int main() {
    fastio;
    for (int i = 2; i <= 45; ++i) {
        a[i] = a[i - 1] + a[i - 2];
    }
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << a[n] << "\n";
    }
    return 0;
}