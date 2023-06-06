#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, e, sum1 = 0, sum2 = 0, tmp;
    cin >> n >> e;
    --n;
    --e;
    while (n--) {
        cin >> tmp;
        sum1 += tmp;
    }
    while (e--) {
        cin >> tmp;
        sum2 += tmp;
    }
    cout << (ceil(sqrt(sum1 * sum1 + sum2 * sum2)));
    return 0;
}