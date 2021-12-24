#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
string	DB[24] = {"ADD", "ADDC", "SUB", "SUBC", "MOV", "MOVC", "AND", "ANDC", "OR", "ORC", "NOT", "NOT", "MULT", "MULTC", "LSFTL", "LSFTLC", "LSFTR", "LSFTRC", "ASFTR", "ASFTRC", "RL", "RLC", "RR", "RRC" };

string tr(int n, int r) {
    string s = "";
    while (n > 0) {
        s = (char)((n % 2) + '0') + s;
        n /= 2;
    }
    int t = r - s.length();
    for (int i = 0; i < t; ++i) {
        s = "0" + s;
    }
    return s;
}

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        int d, a, b;
        cin >> d >> a >> b;
        int r = 0;
        for (; DB[r] != s; ++r) {

        }
        cout << tr(r / 2, 4) << r % 2 << "0" << tr(d, 3) << tr(a, 3);
        if (r % 2 == 1) {
            cout << tr(b, 4);
        }
        else {
            cout << tr(b, 3) << "0";
        }
        cout << '\n';
    }
    return 0;
}