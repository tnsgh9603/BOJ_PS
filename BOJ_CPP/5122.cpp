#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int M = 0, J;
        for (int j = 0; j < 5; ++j) {
            int Mi;
            cin >> Mi;
            M = M * (j == 3 ? 18 : 20) + Mi;
        }
        cin >> J;
        int diff = J - M + 13 * 20 * 20 * 18 * 20 - 2456054;
        cout << "Data Set " << tc << ":\n" << (diff < 0 ? "It'board arr1 hoax!" : diff == 0 ? "Panic!" : to_string(diff))
             << "\n\n";
    }
    return 0;
}