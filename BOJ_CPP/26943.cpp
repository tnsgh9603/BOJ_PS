#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    using namespace std;
    int a, b;
    cin >> a >> b;
    --b;
    vector<int> v;
    for (int i = 1; i < a; ++i) {
        v.push_back(i);
    }
    if (b) {
        rotate(v.begin(), v.end() - b, v.end());
    }
    int half = a / 2;
    v.push_back(a);
    for (int i = 0; i < half; ++i) {
        cout << v[i] << '-' << v[a - i - 1] << "\n";
    }
    return 0;
}