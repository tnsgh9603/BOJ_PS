#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c;
    cin >> a >> b >> c;
    int mn = INT_MAX;

    if (a % b == 0) {
        if (a / b + c >= 0) {
            mn = min(mn, a / b + c);
        }
        if (a / b - c >= 0) {
            mn = min(mn, a / b - c);
        }
        if (a / b * c >= 0) {
            mn = min(mn, a / b * c);
        }
        if ((a / b) % c == 0 and a / b / c >= 0) {
            mn = min(mn, a / b / c);
        }
    }

    if ((a + b) % c == 0 and (a + b) / c >= 0) {
        mn = min(mn, (a + b) / c);
    }
    if (a + b - c >= 0) {
        mn = min(mn, a + b - c);
    }
    if (a + b + c >= 0) {
        mn = min(mn, a + b + c);
    }
    if ((a + b) * c >= 0) {
        mn = min(mn, (a + b) * c);
    }

    if ((a - b) % c == 0 and (a - b) / c >= 0) {
        mn = min(mn, (a - b) / c);
    }
    if (a - b + c >= 0) {
        mn = min(mn, a - b + c);
    }
    if (a - b - c >= 0) {
        mn = min(mn, a - b - c);
    }
    if ((a - b) * c >= 0) {
        mn = min(mn, (a - b) * c);
    }

    if ((a * b) % c == 0 and a * b / c >= 0) {
        mn = min(mn, a * b / c);
    }
    if (a * b + c >= 0) {
        mn = min(mn, a * b + c);
    }
    if (a * b - c >= 0) {
        mn = min(mn, a * b - c);
    }
    if (a * b * c >= 0) {
        mn = min(mn, a * b * c);
    }

    cout << mn;
    return 0;
}