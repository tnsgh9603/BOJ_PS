#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[30][26], arr2[30];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); ++j) {
            ++arr1[j][s[j] - 'a'];
            arr2[j] = max(arr2[j], arr1[j][s[j] - 'a']);
        }
    }
    for (int i = 0; i < 30; ++i) {
        if (arr2[i] == 0) {
            break;
        }
        cout << i + 1 << ":";
        for (int j = 0; j < 26; ++j) {
            if (arr1[i][j] == arr2[i]) {
                cout << " " << (char) ('a' + j);
            }
        }
        cout << "\n";
    }
    return 0;
}