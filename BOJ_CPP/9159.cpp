#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b;
    char c;
    double d;
    cin >> a >> b;
    vector<pair<char, double>> v;
    int cnt1 = 0, cnt2 = 0;
    double sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    for (int i = 0; i < 20; ++i) {
        cin >> c >> d;
        v.push_back({c, d});
        if (c == 'A' || c == 'a') {
            sum1 += d;
            ++cnt1;
            sum3 += a / d;
        } else {
            sum2 += d;
            ++cnt2;
            sum4 += b / d;
        }
    }
    cout << fixed << setprecision(2);
    vector<double> ans{a * cnt1 / sum1, b * cnt2 / sum2, sum3 / cnt1, sum4 / cnt2};
    for (int i = 0; i < 2; ++i) {
        cout << "Method " << i + 1 << "\n" << "African: " << ans[2 * i] << " furlongs per hour\nEuropean: "
             << ans[2 * i + 1] << " furlongs per hour\n";
    }
    return 0;
}