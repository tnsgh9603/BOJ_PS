#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int x, y;
    cin >> x >> y;
    for (int i = x; i <= y; i += 60) {
        cout << "All positions change in year " << i << "\n";
    }
    return 0;
}