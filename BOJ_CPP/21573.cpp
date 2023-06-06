#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b;
    string s;
    cin >> a >> b >> s;
    cout << (s == "freeze" and a > b or s == "heat" and a < b or s == "auto" ? b : a);
    return 0;
}