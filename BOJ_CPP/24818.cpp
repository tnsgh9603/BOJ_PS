#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> v1(n), v2(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
        sum += v1[i];
        v2[i] = sum;
    }
    int ans = sum;
    if (sum % 3 != 0) {
        cout << -1;
        return 0;
    }
    int left = 0, right = v1.size() - 2;
    while (left < right) {
        int leftSum = v2[left], middleSum = v2[right] - v2[left], rightSum = ans - v2[right];
        if (leftSum == middleSum && middleSum == rightSum) {
            cout << left + 1 << " " << right + 1;
            return 0;
        } else if (leftSum < rightSum) {
            ++left;
        } else if (leftSum > rightSum) {
            --right;
        } else {
            --right;
            ++left;
        }
    }
    cout << -1;
    return 0;
}