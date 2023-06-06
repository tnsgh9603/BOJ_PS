#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[20001], arr2[20001];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 2; i <= 20000; ++i) {
        for (int j = 2; i * j <= 20000; ++j) {
            arr1[i * j] = 1;
        }
    }
    int prev = 2;
    for (int i = 3; i * prev <= 20000; ++i) {
        if (!arr1[i]) {
            arr2[i * prev] = 1;
            prev = i;
        }
    }
    for (int i = n + 1; i <= 20000; ++i) {
        if(arr2[i]) {
            cout << i;
            return 0;
        }
    }
}