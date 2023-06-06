#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool cmp(string a, string b) {
    if(a[0] != b[0]) {
        if(a[0] == 'S') {
            return 1;
        }
        else if(b[0] == 'S') {
            return 0;
        }
        else if(a[0] == 'M') {
            return 1;
        }
        else {
            return 0;
        }
    }
    return a[1] < b[1];
}
int main() {
    fastio
    int N;
    while(cin >> N && N) {
        vector<string> v;
        while(N--) {
            string str;
            cin >> str;
            v.push_back(str);
        }
        int M;
        cin >> M;
        while(M--) {
            string s;
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(), v.end(), cmp);
        for(int i=0; i<v.size(); ++i) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}