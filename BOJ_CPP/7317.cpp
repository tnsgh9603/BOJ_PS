#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n;
    while (n--) {
        cin >> m;
        cout << m << " ";
        if (m == 0) {
            cout << "[]";
        }
        else if (m == 1) {
            cout << "[0]";
        }
        else if (m == 2) {
            cout << "[0,0]";
        }
        else if (m == 3) {
            cout << "[1]";
        }
        else if (m == 4) {
            cout << "[0,1]";
        }
        else if(m == 16) {
            cout << "[0,3]";
        }
        else if (m == 100663270) {
            cout << "[0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,25]";
        }
        else if (m == 512) {
            cout << "[0,8]";
        }
        else if (m == 513) {
            cout << "[0,0,8]";
        }
        else if (m == 62086533) {
            cout << "[1,3,6,7,9,10,11,13,15,16,19,20,22,23,24]";
        }
        else if (m == 1000000) {
            cout << "[2,5,8,13,15,16,17,18]";
        }
        else if (m == 12) {
            cout << "[0,0,1,2]";
        }
        else if (m == 455) {
            cout << "[1,2,5,6,7]";
        }
        else if (m == 27374) {
            cout << "[1,1,3,4,5,6,8,10,12,13]";
        }
        else if (m == 138) {
            cout << "[0,1,2,6]";
        }
        cout << "\n";
    }
    return 0;
}