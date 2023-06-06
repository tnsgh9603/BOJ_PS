#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool trapped[21];

bool OOB(int x) {
    return 1 <= x and x <= 20;
}

int main() {
    fastio;
    string s;
    while (getline(cin, s) && s != "#") {
        string temp;
        vector<string> v;
        stringstream ss(s);
        while (ss >> temp) {
            v.push_back(temp);
        }
        int now = stoi(v[0]);
        bool flag = 1;
        memset(trapped, 0, sizeof(trapped));
        trapped[now] = 1;
        for (int i = 1; i < v.size(); ++i) {
            now += (v[i][0] == 'U' ? v[i][1] - '0' : '0' - v[i][1]);
            if (!OOB(now) or trapped[now]) {
                flag = 0;
                break;
            }
            trapped[now] = 1;
        }
        if (flag) {
            int cnt = 0;
            for (int i = 1; i <= 20; ++i) {
                if (!trapped[i]) {
                    ++cnt;
                    cout << i << " ";
                }
            }
            if(!cnt) {
                cout << "none\n";
            }
        } else {
            cout << "illegal\n";
        }
    }
    return 0;
}