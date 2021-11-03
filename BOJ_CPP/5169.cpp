#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int money[51];

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        memset(money, 0, sizeof(money));
        bool flag = 0;
        int s, t;
        cin >> s >> t;
        for (int i = 0; i < t; ++i) {
            int a, b;
            cin >> a >> b;
            money[a - 1] += b;
        }
        int max = 0, second = 0, maxplace;
        for (int i = 0; i < s; ++i) {
            if (money[i] > 2 * max) {
                max = money[i];
                maxplace = i + 1;
            } else if (money[i] > second) {
                second = money[i];
            }
        }
        cout << "Data Set " << tc << ":\n" << (max > 2 * second ? to_string(maxplace) : "No suspect.") << "\n\n";
    }
    return 0;
}