#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[4], arr2[4][1'000'001];

int main() {
    fastio;
    for (int i = 1; i <= 3; ++i) {
        cin >> arr1[i];
    }
    vector<int> v1, v2;
    for (int i = 1; i <= 3; ++i) {
        for (int j = 0; j < arr1[i]; ++j) {
            int a, b;
            cin >> a >> b;
            if (find(v1.begin(), v1.end(), a) == v1.end()) {
                v1.push_back(a);
            }
            arr2[i][a] += b;
        }
    }
    for (int i: v1) {
        if (arr2[1][i] >= 20 && arr2[2][i] >= 20 && arr2[3][i] >= 20) {
            v2.push_back(i);
        }
    }
    cout << v2.size();
    for (int i: v2) {
        cout << " " << setw(6) << setfill('0') << i;
    }
    return 0;
}