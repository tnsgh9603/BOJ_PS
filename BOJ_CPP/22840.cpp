#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
    fastio;
    int n;
    cin >> n;
    while (n > 0) {
        int A = 1, B = 3, C = 6, D = 4, E = 2, F = 5;
        while (n--) {
            string s;
            cin >> s;
            if (s[0] == 'n') {
                int temp = A;
                A = F; F = C; C = E; E = temp;
            }
            else if (s[0] == 'e') {
                int temp = A;
                A = B; B = C; C = D; D = temp;
            }
            else if (s[0] == 's') {
                int temp = A;
                A = E; E = C; C = F; F = temp;
            }
            else if (s[0] == 'w') {
                int temp = A;
                A = D; D = C; C = B; B = temp;
            }
        }
        cout << A << '\n';
        cin >> n;
    }
    return 0;
}