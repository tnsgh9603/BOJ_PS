#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

double sol1(int n) {
    if (n <= 5) {
        return 4;
    } else if (5 < n && n <= 10) {
        return 7;
    } else if (10 < n && n <= 20) {
        return 12;
    } else if (20 < n && n <= 30) {
        return 17;
    } else {
        return n * 0.57;
    }
}

double sol2(int n) {
    if (n <= 2) {
        return 0.9 + n * 0.9;
    } else if (2 < n && n <= 5) {
        return 1 + n * 0.85;
    } else if (5 < n && n <= 20) {
        return 1.25 + n * 0.8;
    } else if (20 < n && n <= 40) {
        return 3.25 + n * 0.7;
    } else {
        return 9.25 + n * 0.55;
    }
}

int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    cout << fixed << setprecision(2) << min(sol1(a / 1000), sol2(a / 1000)) + min(sol1(b / 1000), sol2(b / 1000));
    return 0;
}