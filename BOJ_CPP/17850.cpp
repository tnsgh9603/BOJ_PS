#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[4];
double p[4], q[4];

int main() {
    fastio;
    vector<string> v = {"Lab", "Hw", "Proj", "Exam"};
    map<string, int> mp;
    for (int i = 0; i < 4; ++i) {
        mp[v[i]] = i;
    }
    int n;
    cin >> arr1[0] >> arr1[1] >> arr1[2] >> arr1[3] >> n;
    for (int i = 0; i < n; ++i) {
        string a, b;
        char d;
        double x, y;
        cin >> a >> b >> x >> d >> y;
        int idx = mp[a];
        p[idx] += x;
        q[idx] += y;
    }
    double s = 0;
    for (int i = 0; i < 4; ++i) {
        s += arr1[i] * p[i] / q[i];
    }
    cout << fixed << setprecision(0) << floor(s);
    return 0;
}