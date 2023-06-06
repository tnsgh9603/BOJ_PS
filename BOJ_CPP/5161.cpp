#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

double value[201];

int main() {
    fastio;
    int K, B, D;
    cin >> K;
    for (int i = 1; i <= K; ++i) {
        cin >> B >> D;
        double tmp;
        for (int j = 1; j <= B; ++j) {
            cin >> value[j];
        }
        for (int j = 1; j <= D; ++j) {
            value[B + j] = 0;
            for (int k = 1; k <= B + j - 1; ++k) {
                cin >> tmp;
                value[B + j] += tmp * value[k];
            }
        }
        double sum = 0;
        for (int j = 1; j <= B + D; ++j) {
            cin >> tmp;
            sum += tmp * value[j];
        }
        cout << fixed << setprecision(2) << "Data Set " << i << ":\n" << sum << "\n\n";
    }
    return 0;
}