#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int d[100'001], n, k, s[100'001];
queue<int> q;
vector<int> v;

void f(int a, int b) {
    if (b >= 0 && b <= 100000 && d[b] == 0) {
        q.push(b);
        d[b] = d[a] + 1;
        s[b] = a;
    }
}

int main() {
    fastio;
    cin >> n >> k;
    d[n] = 1;
    q.push(n);
    while (1) {
        int c = q.front();
        q.pop();
        if (c == k) {
            cout << d[c] - 1 << "\n";
            break;
        }
        f(c, c + 1);
        f(c, c - 1);
        f(c, c * 2);
    }
    while (k != n) {
        v.push_back(k);
        k = s[k];
    }
    v.push_back(n);
    for (int i = v.size() - 1; i >= 0; --i) {
        cout << v[i] << " ";
    }
    return 0;
}