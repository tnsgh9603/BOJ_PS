#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N, M;
    cin >> N >> M;
    cout << (N < 2 ? 1 : N < 3 ? min((M + 1) / 2, 4) : M < 7 ? min(M, 4) : M - 2);
    return 0;
}