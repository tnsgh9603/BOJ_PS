#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[6][9], arr2[6], arr3[6];
int main() {
    fastio;
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
        total += arr2[i];
        for (int j = 0; j < arr2[i]; ++j) {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < total; ++i) {
        int idx = -1;
        for (int j = 0; j < n; ++j) {
            if (arr3[j] == arr2[j]) {
                continue;
            }
            if (idx == -1 || arr1[j][arr3[j]] < arr1[idx][arr3[idx]]) {
                idx = j;
            }
        }
        cout << char('A' + idx);
        ++arr3[idx];
    }
    return 0;
}