#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
map<char, int> mp;
int arr1[12];

int main() {
    fastio;
    int n;
    char a, b, c;
    mp['2'] = 2;
    mp['3'] = 3;
    mp['4'] = 4;
    mp['5'] = 5;
    mp['6'] = 6;
    mp['7'] = 7;
    mp['8'] = 8;
    mp['9'] = 9;
    mp['T'] = 10;
    mp['K'] = 10;
    mp['Q'] = 10;
    mp['J'] = 10;
    mp['A'] = 11;
    while (cin >> n && n) {
        cin >> a >> b >> c;
        int sum1 = 0, sum2 = 0, cnt = 0;
        sum1 += mp[a];
        sum2 += mp[b];
        sum2 += mp[c];
        fill(arr1, arr1 + 12, n * 4);
        arr1[10] = 16 * n;
        --arr1[mp[a]];
        --arr1[mp[b]];
        --arr1[mp[c]];
        if (sum2 == 22) {
            sum2 = 1;
        }
        for (int i = 2; i < 12; ++i) {
            int temp = sum1 + i;
            if(temp == 22) {
                temp = 1;
            }
            if(temp < sum2) {
                cnt += arr1[i];
            }
        }
        cout << fixed << setprecision(3) << double(cnt) / (n * 52 - 3) * 100 << "%\n";
    }
    return 0;
}