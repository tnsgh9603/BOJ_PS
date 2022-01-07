#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int a[51], p[51];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        for (int j = 0; j < i; ++j) {
            ++(a[i] < a[j] ? p[j] : p[i]);
        }
    }
    for (int i = 0; i < n;) {
        cout << p[i++] << " ";
    }
    return 0;
}