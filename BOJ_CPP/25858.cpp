#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[31];

int main() {
    fastio;
    int n, d, sum = 0;
    cin >> n >> d;
    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
        sum += arr1[i];
    }
    int avg = d / sum;
    for (int i = 0; i < n; ++i) {
        cout << avg * arr1[i] << "\n";
    }
    return 0;
}