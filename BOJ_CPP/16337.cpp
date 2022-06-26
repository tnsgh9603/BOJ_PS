#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

map<string, int> dice = {
        {"::::o::::", 1},
        {"o:::::::o", 2},
        {"::o:::o::", 2},
        {"o:::o:::o", 3},
        {"::o:o:o::", 3},
        {"o:o:::o:o", 4},
        {"o:o:o:o:o", 5},
        {"ooo:::ooo", 6},
        {"o:oo:oo:o", 6}
};

int main() {
    fastio;
    string l1, l2, l3, s;
    cin >> l1 >> l2 >> l3;
    s = l1 + l2 + l3;
    cout << (dice.count(s) ? to_string(dice[s]) : "unknown");
    return 0;
}
