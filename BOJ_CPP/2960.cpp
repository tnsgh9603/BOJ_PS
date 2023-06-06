#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[1001];

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    for (int i = 2; i <= n; ++i) {
        for (int j = i; j <= n; j += i) {
            if (arr[j] == 0) {
                --k;
                ++arr[j];
            }
            if (k == 0) {
                cout << j;
                return 0;
            }
        }
    }
    return 0;
}