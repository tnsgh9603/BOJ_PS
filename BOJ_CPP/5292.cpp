#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    for(int i=1;i<=n;++i) {
        bool flag = 1;
        if(i % 3 ==0) {
            cout <<"Dead";
            flag = 0;
        }
        if(i % 5 == 0) {
            cout << "Man";
            flag = 0;
        }
        if (flag) {
            cout << i;
        }
        if(flag) {
            cout << " ";
        }
        else {
            cout << "\n";
        }
    }
    return 0;
}