#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr1[101];
string arr2[101];

int main() {
    fastio;
    int N;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cin >> arr1[i];
    }
    for (int i = 1; i <= N; ++i) {
        cin >> arr2[i];
    }
    for (int i = 1; i <= N; ++i) {
        cout << arr2[arr1[arr1[arr1[i]]]] << '\n';
    }
    return 0;
}