#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[210'001], a, p, cnt;

int main() {
    fastio;
    cin >> a >> p;
    while (!arr[a]) {
        arr[a] = ++cnt;
        int s = 0;
        for (int i = a; i; i /= 10) {
            s += pow(i % 10, p);
        }
        a = s;
    }
    cout << arr[a] - 1;
    return 0;
}