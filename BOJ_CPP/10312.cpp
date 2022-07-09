#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr[20];

int main() {
    fastio;
    int a, b, c;
    cin >> a;
    while (a--) {
        cin >> b;
        c = 0;
        for (int i = 0; b > 0; ++i, ++c) {
            arr[i] = b % 3;
            b /= 3;
        }
        for (int i = c - 1; i >= 0; --i) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}