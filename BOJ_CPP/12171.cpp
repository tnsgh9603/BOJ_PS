#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char Complex[200'001];
int len;
long long X;
int table[5][5] = { {0,0,0,0,0}, {0, 1, 2, 3, 4}, {0, 2, -1, 4, -3}, {0, 3, -4, -1, 2}, {0, 4, 3, -2, -1} };

int tonum(char c) {
    return c - 'i' + 2;
}

int go(int a, int b) {
    int sw = 1;
    sw *= (a > 0) ? 1 : -1;
    sw *= (b > 0) ? 1 : -1;
    if (a < 0) {
        a *= -1;
    }
    if (b < 0) {
        b *= -1;
    }
    return sw * table[a][b];
}

int main() {
    int test, i, j;
    cin >> test;
    for (int T = 1; T <= test; ++T) {
        scanf("%d %lld", &len, &X);
        scanf("%s", &Complex[1]);
        printf("Case #%d: ", T);
        int p = 1;
        for (i = 1; i <= len; i++) p = go(p, tonum(Complex[i]));

        if (X >=16){
            X %= 4LL;
            X += 16;
        }
        int q = p;
        p = 1;
        for (i = 1; i <= X; i++) p = go(p, q);

        if (p == -1) {
            for (i = 1; i <= len; i++) {
                for (j = 1; j < X; j++) {
                    Complex[j * len + i] = Complex[i];
                }
            }
            len *= X;
            p = 1;
            int cnt = 2;
            for (i = 1; i <= len; i++) {
                p = go(p, tonum(Complex[i]));
                if (p == cnt) {
                    if (cnt == 4) break;
                    cnt++;
                    p = 1;
                }
            }
            if (i <= len) puts("YES");
            else puts("NO");
        }else puts("NO");
    }
    return false;
}