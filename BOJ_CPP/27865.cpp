#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    int my_ans = n / 2;
    while (1) {
        char ans;
        cout << "? " << n << endl;
        cin >> ans;
        if (ans == 'Y') {
            cout << "! " << n << endl;
            break;
        }
    }
    return 0;
}