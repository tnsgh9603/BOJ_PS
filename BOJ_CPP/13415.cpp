#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[100'001], ans[100'001];
deque<int> dq;

int main() {
    fastio;
    int n, k;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> k;
    int mx = 0;
    for (int i = 0; i < k; ++i) {
        int a, b;
        cin >> a >> b;
        mx = max({a, b, mx});
        // deque에 있는 무시해도 되는 오름차순 정렬이 있으면 빼준다.
        while (dq.size() and abs(dq.back()) <= a) {
            dq.pop_back();
        }
        dq.push_back(a);
        // deque에 있는 무시해도 되는 내림차순 정렬이 있으면 빼준다.
        while (dq.size() and abs(dq.back()) <= b) {
            dq.pop_back();
        }
        dq.push_back(-b);
    }
    dq.push_back(0);
    sort(arr, arr + mx);
    // 이미 불변 예정인거는 그대로 복사해줌
    for (int i = mx; i < n; ++i) {
        ans[i] = arr[i];
    }
    int cur = dq.front();
    dq.pop_front();
    int l = 0, r = mx - 1, ptr = mx - 1;
    while (dq.size()) {
        int nxt = dq.front();
        dq.pop_front();
        int diff;
        if (cur > 0) {
            diff = cur - abs(nxt);
            while (diff) {
                ans[ptr] = arr[r];
                --r;
                --ptr;
                --diff;
            }
        } else {
            diff = -cur - abs(nxt);
            while (diff) {
                ans[ptr] = arr[l];
                ++l;
                --ptr;
                --diff;
            }
        }
        cur = nxt;
    }
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << ' ';
    }
    return 0;
}