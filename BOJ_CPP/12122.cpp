#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int N, O[500001];
double F;
char A[500001];

struct PT {
    int x;
    long double y;
} P[500001];

int main() {
    int T;
    cin >> T;
    while (T--) {
        scanf("%d%lf", &N, &F);
        scanf("%s", A + 1);
        for (int i = 1; i <= N; i++) {
            O[i] = O[i - 1] + (A[i] == '1');
        }
        P[0].x = P[0].y = 0;
        for (int i = 1; i <= N; i++) {
            P[i].x = i;
            P[i].y = F*i - O[i];
        }
        sort(P, P + N + 1, [&](PT x, PT y) {
            if (fabs(x.y - y.y) > 1e-10) return x.y < y.y;
            return x.x < y.x;
        });
        int ans = 0; double f = 1e18;
        for (int i = 0; i < N; i++) {
            double d = fabs((P[i + 1].y - P[i].y) / (P[i + 1].x - P[i].x));
            if (f > d + (1e-10)) {
                f = d;
                ans = min(P[i].x, P[i + 1].x);
            }
            else if (fabs(d - f) < 1e-10) {
                ans = min(ans, min(P[i].x, P[i + 1].x));
            }
        }
        static int tc = 0;
        printf("Case #%d: %d\n", ++tc, ans);
    }
}