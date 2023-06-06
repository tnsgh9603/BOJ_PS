#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        double sum = 0;
        for (int i = 0; i < m; ++i) {
            string a;
            int b;
            double c;
            cin >> a >> b >> c;
            sum += b * c;
        }
        cout << "$" << fixed << setprecision(2) << sum << "\n";
    }
    return 0;
}