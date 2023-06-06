#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[20];

int main() {
    fastio;
    int N, K, a = 0, b, c = 0, n = 0;
    cin >> N >> K;
    while (c < 5) {
        b = a++;
        int s = 0;
        do {
            arr1[s++] = b % 2;
            b /= 2;
        } while (b);
        while (s-- && c < 5) {
            if (n++ % N == K - 1) {
                cout << arr1[s] << " ";
                ++c;
            }
        }
    }
    return 0;
}