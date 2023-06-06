#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N, K;
    cin >> N >> K;
    vector<char> v(N);
    for (int i = 0; i < N; ++i) {
        v[i] = '?';
    }
    int now = 0;
    for (int i = 0; i < K; ++i) {
        int n;
        char c;
        cin >> n >> c;
        n %= N;
        now -= n;
        if (now < 0) {
            now += N;
        }
        if (v[now] != '?' && v[now] != c) {
            cout << "!\n";
            return 0;
        } else {
            v[now] = c;
        }
    }
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (v[i] != '?' && v[i] == v[j]) {
                cout << "!\n";
                return 0;
            }
        }
    }
    int rot = N;
    while (rot--) {
        cout << v[now++];
        if (now == N) {
            now = 0;
        }
    }
    return 0;
}