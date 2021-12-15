#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[21];

int main() {
    fastio;
    int T, x = 1;
    cin >> T;
    while (T--) {
        cout << "Case # " << x++ << ':' << '\n';
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); ++i) {
            arr[i] = i;
        }
        do {
            for (int i = 0; i < s.length(); ++i)
                cout << s[arr[i]];
            cout << "\n";
        } while (next_permutation(arr, arr + s.length()));
    }
    return 0;
}