#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int tree[10001];

// 후위 순회 : L R V
// 전위 순회 : V L R
void postorder(int st, int en) {
    if (st >= en) {
        return;
    }
    int idx = st + 1;
    while (idx < en) {
        if (tree[st] < tree[idx]) {
            break;
        }
        ++idx;
    }
    // L
    postorder(st + 1, idx);
    // R
    postorder(idx, en);
    // root
    cout << tree[st] << "\n";
}

int main() {
    fastio;
    int num, idx = 0;
    while (cin >> num) {
        tree[idx++] = num;
    }
    postorder(0, idx);
    return 0;
}