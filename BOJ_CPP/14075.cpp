#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr[16];

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < 16; ++i) {
        arr[i] = s[i] - '0';
    }
    for (int i = 0; i < 16; i += 2) {
        arr[i] = arr[i] * 2;
    }
    for (int i = 0; i < 16; ++i) {
        if (arr[i] >= 10) {
            arr[i] = arr[i] / 10 + arr[i] % 10;
        }
    }
    int sum = 0;
    for (int i = 0; i < s.length(); ++i) {
        sum += arr[i];
    }
    cout << (!(sum % 10) ? "DA" : "NE");
    return 0;
}