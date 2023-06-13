#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

#define int long long
#define pai 3.141592653589793238462643383279502884197169399375105820
#define MOD 1000000007
#define eps 0.00000001

inline int min(int a, int b) { return a < b ? a : b; }

inline int max(int a, int b) { return a > b ? a : b; }

#define ULL unsigned long long
#define LL long long
#define INF 0x3f3f3f3f
#define INF_LL 0x3f3f3f3f3f3f3f3f
static char buf[1000000], *paa = buf, *pd = buf;
static char buf2[1000000], *pp = buf2;
#define getchar() paa==pd&&(pd=(paa=buf)+fread(buf,1,1000000,stdin),paa==pd)?EOF:*paa++

inline void pc(char ch) {
    if (pp - buf2 == 1000000) fwrite(buf2, 1, 1000000, stdout), pp = buf2;
    *pp++ = ch;
}

inline void pcc() {
    fwrite(buf2, 1, pp - buf2, stdout);
    pp = buf2;
}

inline int read(void) {
    int w = 1;
    int x(0);
    char c(getchar());
    while (c < '0' || c > '9') {
        if (c == '-') w = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9') x = (x << 1) + (x << 3) + (c ^ 48), c = getchar();
    return w * x;
}

void write(int x) {
    if (x < 0) pc('-'), x = -x;
    static int sta[20];
    int top = 0;
    do {
        sta[top++] = x % 10, x /= 10;
    } while (x);
    while (top) pc(sta[--top] + 48);
}

signed main(void) {
    int l, r, b, k;
    cin >> l >> r >> b >> k;
    printf("%lld", (l + b - 1) / b * b * k);
    return 0;
}