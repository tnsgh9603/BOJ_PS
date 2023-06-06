#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    int a, b;
    scanf("%d:%d", &a, &b);
    a = 59 * (60 * a + b);
    printf("%02d:%02d:%02d\n", a / 3600, a / 60 % 60, a % 60);
    return 0;
}