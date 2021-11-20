#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[101];
string str[101];

int main() {
    fastio;
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> str[i];
    }
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    for (int i = 0, j; i < N; i = j + 1) {
        for (j = i; j < N && arr[j] != 1; ++j);
        int idx = -1;
        for (int k = 0; k < m; ++k) {
            if (str[k].size() != j - i) {
                continue;
            }
            bool flag = 1;
            for (int w = 0; w < str[k].size(); ++w) {
                int now = str[k][w] <= 'O' ? (str[k][w] - 65) / 3 + 2 : str[k][w] < 'T' ? 7 : str[k][w] < 'W' ? 8 : 9;
                if (now != arr[i + w]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                idx = k;
                break;
            }
        }
        cout << (idx == -1 ? string(j - i, '*') : str[idx]) << " ";
    }
    return 0;
}