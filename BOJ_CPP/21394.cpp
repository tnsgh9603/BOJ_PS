#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[10];

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        memset(arr, 0, sizeof(arr));
        int cnt = 0;
        for (int i = 1; i <= 9; ++i) {
            int n;
            cin >> n;
            if(i == 6) {
                arr[9] += n;
            }
            else {
                arr[i] += n;
            }
            cnt += arr[i];
        }
        vector<int> v(cnt);
        int left = 0, right = cnt - 1;
        bool flag = 1;
        for (int i = 9; i >= 1; --i) {
            while (arr[i]) {
                --cnt;
                --arr[i];
                if (flag) {
                    v[left++] = i;
                    flag = 0;
                } else {
                    v[right--] = i;
                    flag = 1;
                }
            }
            if (cnt == 0) {
                for (auto i: v) {
                    cout << i << " ";
                }
                cout << "\n";
                break;
            }
        }
    }
    return 0;
}