#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double xs1, ys1, xs2, ys2;
    double xe1, ye1, xe2, ye2;
    cin >> xs1 >> ys1 >> xs2 >> ys2 >> xe1 >> ye1 >> xe2 >> ye2;
    double ans1 = sqrt((xs1 - xs2) * (xs1 - xs2) + (ys1 - ys2) * (ys1 - ys2)), ans2 = sqrt(
            (xe1 - xe2) * (xe1 - xe2) + (ye1 - ye2) * (ye1 - ye2));
    cout << fixed << setprecision(6) << max(ans1, ans2);
    return 0;
}

