#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < (a + b) / 2; ++i) {
        int temp = i;
        string s = "";
        while (1) {
            s += char(temp % 26 + 'a');
            temp /= 26;
            if(!temp) {
                break;
            }
        }
        cout << s << " ";
    }
    return 0;
}