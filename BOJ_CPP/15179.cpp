#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N;
    string a, b, s;
    getline(cin, a);
    getline(cin, b);
    cin >> N >> s;
    int x = 0, y = 0;
    for (int i = 0; i < N; ++i) {
        if (s[i] == 'H') {
            ++(i % 2 ? y : x);
        } else if (s[i] == 'D') {
            if (i % 2 == 0) {
                x += (x == 6 ? 1 : 2);
            } else {
                y += (y == 6 ? 1 : 2);
            }
        } else if (s[i] == 'O') {
            ++(i % 2 ? x : y);
        }
        if (x >= 7 || y >= 7) {
            break;
        }
    }
    cout << a << " " << x << " " << b << " " << y << ". ";
    cout <<
    if () {
        cout << (x > y ? a : b) << " has won.";
    } else if (x != y) {
        cout << (x > y ? a : b) << " is winning.\n";
    } else cout << "All square.\n";
}
