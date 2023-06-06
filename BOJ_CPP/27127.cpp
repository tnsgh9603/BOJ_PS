#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int fghij = 6381;; ++fghij) {
        int abcde = fghij * 9;

        int e = abcde % 10;
        int d = (abcde / 10) % 10;
        int c = (abcde / 100) % 10;
        int b = (abcde / 1000) % 10;
        int a = abcde / 10000;

        int j = fghij % 10;
        int i = (fghij / 10) % 10;
        int h = (fghij / 100) % 10;
        int g = (fghij / 1000) % 10;
        int f = fghij / 10000;

        bool visited[10] = {0,};
        int cnt = 0;
        visited[a] = 1;
        visited[b] = 1;
        visited[c] = 1;
        visited[d] = 1;
        visited[e] = 1;
        visited[f] = 1;
        visited[g] = 1;
        visited[h] = 1;
        visited[i] = 1;
        visited[j] = 1;

        for (int i = 0; i < 10; ++i) {
            if (visited[i]) {
                ++cnt;
            }
        }
        if (cnt == 10) {
            n -= 1;
            if (n == 0) {
                cout << a << b << c << d << e << " " << f << g << h << i << j << "\n";
                break;
            }
        }
    }
    return 0;
}