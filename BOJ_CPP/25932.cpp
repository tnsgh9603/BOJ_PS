#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n >> ws;
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        int n;
        bool flag1 = 0, flag2 = 0;
        while (ss >> n) {
            if (n == 17) {
                flag1 = 1;
            } else if (n == 18) {
                flag2 = 1;
            }
        }
        cout << s << "\n" << (flag1 and flag2 ? "both" : !flag1 and !flag2 ? "none" : flag1 ? "zack" : "mack") << "\n\n";
    }
    return 0;
}