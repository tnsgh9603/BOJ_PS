#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[5];
bool trapped[5];

int main() {
    fastio;
    int cnt = 0;
    for (int i = 1; i <= 4; ++i) {
        cin >> arr1[i];
        trapped[arr1[i]] = 1;
        if (arr1[i]) {
            ++cnt;
        }
    }
    if (cnt == 3) {
        for (int i = 1; i <= 4; ++i) {
            if (!arr1[i]) {
                cout << i << " ";
                break;
            }
        }
        for (int i = 1; i <= 4; ++i) {
            if (!trapped[i]) {
                cout << i;
                return 0;
            }
        }
    } else if (cnt == 2) {
        for (int i = 1; i <= 4; ++i) {
            if (!trapped[i]) {
                cout << i << " ";
            }
        }
    }
    else if(cnt == 4) {
        cout << arr1[1] << " " << arr1[2];
    }
    return 0;
}