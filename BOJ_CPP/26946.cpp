#include <stdio.h>

int main() {
    int tid, mogen[1002], antmogna, n, a, b;
    scanf("%d", &n);
    scanf("%d", &tid);
    for (a = 0; a <= n + 1; a++) mogen[a] = -1;
    for (a = 0; a < 3; a++) {
        scanf("%d", &b);
        mogen[b] = 0;
    }
    antmogna = 3;
    for (a = 0; a < tid; a++)
        for (b = 1; b <= n; b++)
            if (mogen[b] == -1 && (mogen[b - 1] == a || mogen[b + 1] == a)) {
                mogen[b] = a + 1;
                antmogna++;
            }
    printf("%d\n", antmogna);
    return 0;
}