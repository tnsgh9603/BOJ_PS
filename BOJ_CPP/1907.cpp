#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[3][3];

int main() {
    fastio;
    int p = 0, k;
    char bur;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'C' || s[i] == 'H' || s[i] == 'O') {
            k = 1;
            bur = s[i];
            if ('2' <= s[i + 1] && s[i + 1] <= '9') {
                ++i;
                k = s[i] - '0';
            }
            switch (bur) {
                case 'C': {
                    arr[p][0] += k;
                    break;
                }
                case 'H': {
                    arr[p][1] += k;
                    break;
                }
                case 'O': {
                    arr[p][2] += k;
                }
            }
        } else {
            ++p;
        }
    }
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            for (int k = 1; k <= 10; ++k) {
                for (int p = 0; p < 3; ++p) {
                    if (arr[0][p] * i + arr[1][p] * j != arr[2][p] * k) {
                        goto hell;
                    }
                }
                cout << i << " " << j << " " << k;
                return 0;
                hell:;
            }
        }
    }
    return 0;
}