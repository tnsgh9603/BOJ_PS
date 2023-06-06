#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    // measurezero 님 코드 참조
    fastio;
    int T;
    map<string, string> mp;
    mp.insert({"January", "01"});
    mp.insert({"February", "02"});
    mp.insert({"March", "03"});
    mp.insert({"April", "04"});
    mp.insert({"May", "05"});
    mp.insert({"June", "06"});
    mp.insert({"July", "07"});
    mp.insert({"August", "08"});
    mp.insert({"September", "09"});
    mp.insert({"October", "10"});
    mp.insert({"November", "11"});
    mp.insert({"December", "12"});
    cin >> T;
    while (T--) {
        string M, D, Y;
        cin >> M >> D >> Y;
        D.pop_back();
        int DD = stoi(D);
        if (DD < 10) {
            D = "0" + D;
        }
        Y = "0" + Y;
        if (mp.count(M) && 0 < DD && DD < 32) {
            cout << mp[M] << '/' << D << '/' << Y.substr(Y.length() - 2, 2) << '\n';
        } else {
            cout << "Invalid\n";
        }
    }
    return 0;
}