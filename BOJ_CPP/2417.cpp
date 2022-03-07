#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    long long n;
    cin >> n;
    cout << (long long) ceill(sqrtl(n));
    return 0;
}