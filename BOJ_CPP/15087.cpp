#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main(){
    fastio;
    string s;
    cin >> s;
    int len = s.length(), sum1 = 0, sum2 = 0;
    for (int i = 0; i < len / 2; ++i){
        sum1 += s[i];
        sum2 += s[i + len / 2];
    }
    for (int i = 0; i < len / 2; ++i){
        int x = s[i] + sum1, y = s[i + len / 2] + sum2;
        cout << char((x + y) % 26 + 'A');
    }
    return 0;
}