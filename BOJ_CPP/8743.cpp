#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        int temp1 = 0, temp2;
        while(1) {
            if(temp2 == n) {
                break;
            }
            ++temp1;
            ++temp2;
            if(temp1 == b) {
                --temp1;
            }
        }

    }
    return 0;
}