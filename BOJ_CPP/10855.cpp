#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[1025];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
    bool flag = 1;
    for (int i = 2; i <= n; ++i) {
        if (arr[i] < arr[i - 1]) {
            flag = 0;
            break;
        }
    }
    cout << (flag ? "yes" : "no");
    return 0;
}