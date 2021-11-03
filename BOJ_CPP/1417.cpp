#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, p, v[1001] = {0}, k, c = 0, m = 1000;
    cin >> n >> p;
    --n;
    while (n > 0) {
        cin >> k;
        ++v[k];
        --n;
    }
    while (m >= p) {
        if (!v[m]){
            --m;
        }
        else {
            --v[m];
            ++v[m - 1];
            ++p;
            ++c;
        }
    }
    cout << c;
    return 0;
}