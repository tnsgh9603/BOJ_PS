#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int item[101][2], mn[101][100'001];

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        cin >> item[i][0] >> item[i][1]; // [0]에 무게, [1]에 가치를 넣음
    }
    for (int i = 1; i <= n; ++i) {
        int weight = item[i][0], val = item[i][1];
        for (int j = 0; j <= k; ++j) {
            if (j < weight) { // 현재 배낭 무게가 해당 차례의 물건을 담지 못하는 무게이면
                mn[i][j] = mn[i - 1][j]; // 전번 차례의 물건일때의 가치를 넣어준다.
            } else { // 담을 수 있다면
                mn[i][j] = max(mn[i - 1][j], mn[i - 1][j - weight] + val); // 담았을 때와 안 담았을때의 가치를 비교한다.
            }
        }
    }
    cout << mn[n][k];
    return 0;
}