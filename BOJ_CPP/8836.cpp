#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        int temp = b;
        while (temp < a) {
            temp += b - 1;
        }
        cout << temp - a << "\n";
    }
    return 0;
}