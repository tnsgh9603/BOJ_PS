#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y >> ws;
        for (int i = 0; i < Y; ++i) {
            string s;
            getline(cin, s);
        }
        cout << (X == 1 ? Y * 2 - 2 : Y == 1 ? X * 2 - 2 : X % 2 != 0 && Y % 2 != 0 ? X * Y + 1 : X * Y) << "\n";
    }
    cout << "LOL";
    return 0;
}