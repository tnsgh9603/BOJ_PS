#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long n, sum = 0;
    while (cin >> n && n != -1) {
        sum += n;
    }
    cout << sum;
    return 0;
}