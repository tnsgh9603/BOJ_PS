#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool compare(pair<int,string> p1, pair<int,string>p2){
    if(p1.first == p2.first) {
        return p1.second < p2.second;
    }
    return p1.first > p2.first;
}
int main() {
    fastio;
    int n;
    string s;
    cin >> s >> n;
    vector<pair<int, string>> v(n);
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        v[i] = {i, s};
    }
    for (int i = 0; i < n; ++i) {
        int sum1 = 0, sum2 = 0, sum3 = 0;
        for (int j = 0; j < 4; ++j) {
            sum1 += ((s[j] - '0') - (v[i].second[j] - '0')) * ((s[j] - '0') - (v[i].second[j] - '0'));
        }
        for (int j = 4; j < 6; ++j) {
            sum2 += ((s[j] - '0') - (v[i].second[j] - '0')) * ((s[j] - '0') - (v[i].second[j] - '0'));
        }
        for (int j = 6; j < 8; ++j) {
            sum3 += ((s[j] - '0') - (v[i].second[j] - '0')) * ((s[j] - '0') - (v[i].second[j] - '0'));
        }
        v[i].first = sum1 * sum2 * sum3;
    }
    sort(v.begin(), v.end(), compare);
    cout << v[0].second;
    return 0;
}