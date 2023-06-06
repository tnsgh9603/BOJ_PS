#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    unordered_set<string> s1, s2;
    string s;
    int A, B, G;
    cin >> A >> B >> G;
    while (A--) {
        cin >> s;
        s1.insert(s);
    }
    while (B--) {
        cin >> s;
        s2.insert(s);
    }
    while (G--) {
        cin >> s;
        ++(s1.find(s) != s1.end() ? A : B);
    }
    cout << (A == B ? "TIE" : A > B ? "A" : "B");
    return 0;
}