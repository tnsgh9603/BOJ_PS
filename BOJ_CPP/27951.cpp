#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[1'000'001];
char arr2[1'000'001];

int main() {
    fastio;
    int n, u, d;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr1[i];
    }
    cin >> u >> d;
    for (int i = 1; i <= n; ++i) {
        if (arr1[i] == 1 and u > 0) {
            arr2[i] = 'U';
            --u;
        } else if (arr1[i] == 2 and d > 0) {
            arr2[i] = 'D';
            --d;
        }
    }
    bool flag = 1;
    for (int i = 1; i <= n; ++i) {
        if (u + d == 0) {
            break;
        } else {
            if (arr1[i] == 3) {
                if (u > 0) {
                    arr2[i] = 'U';
                    --u;
                } else if (d > 0) {
                    arr2[i] = 'D';
                    --d;
                } else {
                    flag = 0;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (arr2[i] == 0) {
            flag = 0;
            break;
        }
    }
    if (!flag) {
        cout << "NO";
    } else {
        cout << "YES\n";
        for (int i = 1; i <= n; ++i) {
            cout << arr2[i];
        }
    }
    return 0;
}