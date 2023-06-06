#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[301];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int t = 0, s = 0, m = 0, w;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        w = (arr[i] - x == 1 || (arr[i] == 1 && x == 3) ? 1 : arr[i] == x ? 0 : 2);
        if (w == t) {
            ++m;
        } else {
            s = s > m ? s : m;
            m = 1;
            t = t ? 3 - t : w;
        }
    }
    cout << (s > m ? s : m);
    return 0;
}
