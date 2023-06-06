#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr1[101];

int compute(int N, int len) {
    int mx = *max_element(arr1, arr1 + N), sum = accumulate(arr1, arr1 + N, 0), temp = len / mx + 1;
    return (temp < 2 || len < 2 * sum ? 0 : temp);
}

int main() {
    fastio;
    int N;
    while (cin >> N && N) {
        for (int i = 0; i < N; ++i) {
            cin >> arr1[i];
        }
        cout << compute(N, 50) << " ";
        cout << compute(N, 60) << " ";
        cout << compute(N, 70) << "\n";
    }
    return 0;
}