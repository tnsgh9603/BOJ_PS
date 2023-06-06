#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int num3 = (num1 + num2) % 10, num4 = (num2 + num3) % 10, cnt = 4;
    if (num3 == num1 && num4 == num2) {
        cout << cnt;
        return 0;
    }
    while (1) {
        ++cnt;
        int temp = (num3 + num4) % 10;
        num3 = num4;
        num4 = temp;
        if (num3 == num1 && num4 == num2) {
            cout << cnt;
            return 0;
        }
    }
}