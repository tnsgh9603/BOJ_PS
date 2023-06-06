#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
string arr[101];
int cnt[101];

int main() {
    fastio;
    int N, tc = 1;
    while (cin >> N && N) {
        cin >> ws;
        memset(cnt, 0, sizeof(cnt));
        for (int i = 0; i < N; ++i) {
            getline(cin, arr[i]);
        }
        for (int i = 0; i < N * 2 - 1; ++i) {
            int n;
            char c;
            cin >> n >> c;
            ++cnt[n - 1];
        }
        for (int i = 0; i < N; ++i) {
            if (cnt[i] == 1) {
                cout << tc++ << " " << arr[i] << "\n";
            }
        }
    }
    return 0;
}