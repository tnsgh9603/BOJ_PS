#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

typedef long long ll;
string S;
int gl, gr, pl, arr, flag, game_end, win;

void sol() {
    if ((pl >= 5 && pl - arr >= 2) || pl == 10) {
        ++gl;
        pl = arr = 0;
        flag = 0;
    }
    if ((arr >= 5 && arr - pl >= 2) || arr == 10) {
        ++gr;
        pl = arr = 0;
        flag = 1;
    }
    if (gl == 2 || gr == 2) {
        game_end = 1;
    }
    if (gl == 2) {
        win = 0;
    } else if (gr == 2) {
        win = 1;
    }
    return;
}

int main() {
    fastio;
    cin >> S;
    for (char c: S) {
        if (c == 'S') {
            ++(!flag ? pl : arr);
        } else if (c == 'R') {
            ++(flag ? pl : arr);
            flag ^= 1;
        } else if (c == 'Q') {
            if (game_end) {
                cout << gl << " " << (!win ? "(winner) " : "") << "- "<< gr << " " << (win ? "(winner)" : "") << "\n";
            } else {
                cout << gl << " (" << pl << (!flag ? "*" : "") << ") - " << gr << " (" << arr << (flag ? "*" : "") << ")\n";
            }
        }
        sol();
    }
    return 0;

}