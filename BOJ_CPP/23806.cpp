#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N;
    cin >> N;
    for (int i = 0; i < 5 * N; ++i) {
        for (int j = 0; j < 5 * N; ++j) {
            cout << (N <= i && i < 4 * N && N <= j && j < 4 * N ? ' ' : '@');
        }
        cout << "\n";
    }
    return 0;
}