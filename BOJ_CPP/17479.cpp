#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
int main() {
    fastio;
    ll a, b, c, d, f;
    string e;
    cin >> a >> b >> c;
    map<string, ll> mp1, mp2, mp3;
    while (a--) {
        cin >> e >> d;
        mp1[e] = d;
    }
    while (b--) {
        cin >> e >> d;
        mp2[e] = d;
    }
    while (c--) {
        cin >> e;
        mp3[e] = 1;
    }
    cin >> f;
    vector<string> v;
    ll sum = 0;
    bool flag = 1;
    while (f--) {
        cin >> e;
        v.push_back(e);
    }
    for (int i = 0; i < v.size(); ++i) {
        if (mp1.count(v[i])) {
            sum += mp1[v[i]];
        }
    }
    for (int i = 0; i < v.size(); ++i) {
        if (mp2.count(v[i])) {
            if (sum >= 20000) {
                sum += mp2[v[i]];
            } else {
                flag = 0;
                break;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (mp3.count(v[i])) {
            if (sum < 50000 or cnt) {
                flag = 0;
                break;
            }
            cnt = 1;
        }
    }
    cout << (flag ? "Okay" : "No");
    return 0;
}