#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    --n, --k;
    cout << k - n % k;
    return 0;
}