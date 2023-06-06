#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int get(int from, int total) {
    int p = 10000 * from;
    int q = total;
    return (p / q) + (2 * (p % q) >= q);
}

string arr1[41];
int arr1[41], num[41];

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }
    int inv = 0;
    for (int i = 0; i < m; ++i) {
        string s;
        cin >> s;
        int who = -1;
        for (int j = 0; j < n; ++j) {
            if (s[j] == 'X') {
                who = (who == -1 ? j : -2);
            }
        }
        ++(who >= 0 ? arr1[who] : inv);
    }
    for (int i = 0; i < n; ++i) {
        num[i] = i;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr1[i] < arr1[j] || arr1[i] == arr1[j] && num[i] > num[j]) {
                swap(arr1[i], arr1[j]);
                swap(num[i],num[j]);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        int per = get(arr1[i], m);
        cout << arr1[num[i]] << " " << per / 100 << "." << per / 10 % 10 << per % 10 << "%\n";
    }
    int per = get(inv, m);
    cout << "Invalid " << per / 100 << "." << per / 10 % 10 << per % 10 << "%";
    return 0;
}
