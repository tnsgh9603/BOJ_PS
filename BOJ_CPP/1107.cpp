#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool unavailable[11];

int main() {
    fastio;
    int final, n, m;
    cin >> final >> n;
    while (n--) {
        cin >> m;
        unavailable[m] = 1;
    }
    int mn = 100, diff = 987654321;
    for (int i = 0; i < 1'000'000; ++i) {
        string temp = to_string(i);
        bool flag = 1;
        for (int j = 0; j < temp.length(); ++j) {
            if (unavailable[temp[j] - '0']) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            if (abs(stoi(temp) - final) < diff) {
                diff = abs(stoi(temp) - final);
                mn = stoi(temp);
            }
        }
    }
    cout << min(abs(mn - final) + int(to_string(mn).length()), abs(100 - final));
    return 0;
}