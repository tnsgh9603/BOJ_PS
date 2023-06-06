#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[100];

int main() {
    fastio;
    int n, m, k;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr1[i];
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> k;
        --arr1[k];
    }
    for (int i = 1; i <= n; ++i) {
        cout << (arr1[i] >= 0 ? "no" : "yes") << "\n";
    }
    return 0;
}