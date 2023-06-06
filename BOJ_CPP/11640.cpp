#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
string S[21];
double d, arr1[20], B[20];

int main() {
    int T;
    cin >> T;
    fastio;
    for (int t = 1; t <= T; ++t) {
        cout << "Recipe # " << t << "\n";
        int a, b, c;
        cin >> a >> b >> c;
        d = (double) c / (double) b;
        for (int i = 0; i < a; ++i) {
            cin >> S[i] >> arr1[i] >> B[i];
            if (B[i] == 100.0) {
                d *= arr1[i];
            }
        }
        for (int i = 0; i < a; ++i) {
            cout << S[i] << " " << fixed << setprecision(1) << B[i] * d / 100.0 << "\n";
        }
        cout << "----------------------------------------\n";
    }
    return 0;
}