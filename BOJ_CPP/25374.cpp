#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    vector<int> v = {4, 11, 23, 40, 60, 77, 89, 96, 100}, ret(9);
    map<int, int> mp;
    int n, sum = 0, temp = 0;
    cin >> n;
    while (n--) {
        int s;
        cin >> s;
        ++mp[s];
    }
    for (auto iter = mp.rbegin(); iter != mp.rend(); ++iter) {
        while (sum >= v[temp]) {
            ++temp;
        }
        sum += iter->second;
        ret[temp] += iter->second;
    }
    for (auto i: ret) {
        cout << i << "\n";
    }
    return 0;
}