#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double M, S, G, A, B, L, R;
    cin >> M >> S >> G >> A >> B >> L >> R;
    double stand = M / S + R / B, walk = M / G + L / A;
    cout << (stand < walk ? "latmask" : "friskus");
    return 0;
}