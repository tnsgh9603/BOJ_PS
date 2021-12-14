#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
stack<int> c, d, e;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = n; i > 0; --i) {
        c.push(i);
    }
    while (e.size() < n) {
        int a, b;
        cin >> a >> b;
        if (a - 1) {
            while (!d.empty() && b--) {
                e.push(d.top());
                d.pop();
            }
        } else {
            while (!c.empty() && b--) {
                d.push(c.top());
                c.pop();
            }
        }
    }
    while (!e.empty()) {
        cout << e.top() << "\n";
        e.pop();
    }
    return 0;
}