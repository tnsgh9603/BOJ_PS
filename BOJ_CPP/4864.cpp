#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[10001];

int main() {
    fastio;
    int temp = 1, cnt = 0;
    for (int i = 1; i <= 10000; ++i) {
        arr[i] = arr[i - 1] + temp;
        ++cnt;
        if (temp == cnt) {
            cnt = 0;
            ++temp;
        }
    }
    int n;
    while (cin >> n && n) {
        cout << n << " " << arr[n] << "\n";
    }
    return 0;
}