#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
long long arr[100'001];

int main() {
    fastio;
    long long n, sum = 0, x, mn;
    cin >> n;
    for (int i = 0; i < n - 1; ++i) {
        cin >> arr[i];
    }
    cin >> mn;
    for (int i = 1; i < n; ++i) {
        sum = sum + mn * arr[i - 1];
        cin >> x;
        mn = mn < x ? mn : x;
    }
    cout << sum;
    return 0;
}