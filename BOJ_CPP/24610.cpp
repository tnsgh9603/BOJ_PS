#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[101], arr2[101];

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        cin >> arr1[i];
    }
    int idx = 1, temp = 0;
    for (int i = 1; i <= n;) {
        if (arr1[idx] > arr2[idx]) {
            ++arr2[idx];
            ++i;
        }
        ++idx;
        if (idx == n + 1) {
            idx = 1;
        }
        ++temp;
        if(temp > 10000) {
            break;
        }
    }
    for (int i = 1; i <= m; ++i) {
        cout << arr2[i] << "\n";
    }
    return 0;
}