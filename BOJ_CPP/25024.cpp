#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    fastio;
    int n, a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        cout << (0 <= a && a <= 23 && 0 <= b && b <= 59 ? "Yes" : "No") << " "
             << (1 <= a && a <= 12 && 1 <= b && b <= month[a] ? "Yes" : "No") << "\n";
    }
    return 0;
}