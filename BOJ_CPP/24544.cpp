#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[1001];

int main() {
    fastio;
    int N, a = 0, b = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        a += arr[i];
        b += !x * arr[i];
    }
    cout << a << "\n" << b;
    return 0;
}