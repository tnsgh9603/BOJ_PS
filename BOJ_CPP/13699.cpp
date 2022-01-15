#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

long long arr[36] = {1};

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            arr[i] += arr[j] * arr[i - j - 1];
        }
    }
    cout << arr[n];
    return 0;
}
