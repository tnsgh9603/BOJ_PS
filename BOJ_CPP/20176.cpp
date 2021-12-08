#include <bits/stdc++.h>

using namespace std;

int n;
bitset<60'001> a, b, cnt;
vector<int> arr;

int main() {
    cin >> n;
    for (int i; n--;) {
        cin >> i;
        a.set(i + 30'000);
    }
    cin >> n;
    arr.resize(n);
    for (auto &i: arr) cin >> i, i += 30'000;

    cin >> n;
    for (int i; n--;) {
        cin >> i;
        b.set(30'000 - i);
    }

    long long cnt = 0;
    for (auto &i: arr) {
        i = 60'000 - i * 2;
        if (i > 0)
            cnt = (a << i) & b;
        else
            cnt = (a >> (-i)) & b;
        cnt += cnt.count();
    }
    cout << cnt;
    return 0;
}
