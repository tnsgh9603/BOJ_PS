#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    while(getline(cin, s)) {
        for(int i=0;i<s.length();++i) {
            if(s[i] == 'i') {
                s[i] = 'e';
            }
            else if(s[i] == 'e') {
                s[i] = 'i';
            }
            else if(s[i] == 'E') {
                s[i] = 'I';
            }
            else if(s[i] == 'I') {
                s[i] = 'E';
            }
        }
        cout << s << "\n";
    }
    return 0;
}