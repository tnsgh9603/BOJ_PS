#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[3001];

int main() {
    fastio;
    int n, i = 1, a = 0, z;
    while (cin >> n) {
        int b, j = n - 1;
        cin >> b;
        while (j--) {
            int t;
            cin >> t;
            z = (b - t < 0) ? t - b : b - t;
            (arr[z] < i && z < n ? arr[z] : a) = i;
            b = t;
        }
        cout << (a < i++ ? "Jolly" : "Not jolly") << "\n";
    }
    return 0;
}