#include <bits/stdc++.h>
using namespace std;
int main() {
    double a, c;
    string b, d;
    vector<string> v;
    while (cin >> a >> b >> c, cin.get(), getline(cin,d) && a >=0) {
        if (a / c >= 0.01) {
            cout << d << " " << fixed << setprecision(1) << a << " " << b << " " << fixed << setprecision(0)
                 << a / c * 100 << "%\n";
        } else {
            v.push_back(d);
        }
    }
    cout << "Provides no significant amount of:\n";
    for (string s: v) {
        cout << s << "\n";
    }
}