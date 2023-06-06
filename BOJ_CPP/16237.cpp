#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int handle[6];

int main() {
    fastio;
    int cnt = 0, free_space;
    for (int i = 1; i <= 5; ++i) {
        cin >> handle[i];
    }
    while (handle[1] + handle[2] + handle[3] + handle[4] + handle[5]) {
        ++cnt;
        free_space = 5;
        for (int i = 5; i > 0; --i) {
            while (handle[i] && free_space >= i) {
                free_space -= i;
                --handle[i];
            }
        }
    }
    cout << cnt;
    return 0;
}