#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int s, m;
    cin >> s >> m;
    cout << (s < 1024 ? "No thanks" : (s - 1023) & ~m ? "Impossible" : "Thanks");
    return 0;
}