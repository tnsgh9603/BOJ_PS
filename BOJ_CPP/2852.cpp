#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board[2881][2];

int main() {
    int N;
    cin >> N;
    while (N--) {
        int a, b, c;
        scanf("%d %d:%d", &a, &b, &c);
        for (int i = b * 60 + c; i < 2880; ++i) {
            ++board[i][a - 1];
        }
    }
    int a = 0, b = 0;
    for (int i = 0; i < 2880; ++i) {
        a += (board[i][0] > board[i][1]);
        b += (board[i][0] < board[i][1]);
    }
    printf("%02d:%02d\n%02d:%02d", a / 60, a % 60, b / 60, b % 60);
    return 0;
}