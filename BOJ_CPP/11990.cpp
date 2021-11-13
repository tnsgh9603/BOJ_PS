// https://blog.naver.com/jinhan814/222555300685 진한님의 코드를 참고하여 공부중입니다.
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

#define all(v) (v).begin(), (v).end()
#define Compress(v) sort(all(v)), (v).erase(unique(all(v)), (v).end())
#define IDX(v, x) (lower_bound(all(v), x) - (v).begin() + 1)

struct Fenwick {
    vector<int> tree;
    int sz;

    Fenwick(int sz) : tree(sz + 1), sz(sz) {}

    void Update(int i, int val) {
        for (; i <= sz; i += i & -i) {
            tree[i] += val;
        }
    }

    int Query(int i) {
        int ret = 0;
        for (; i; i -= i & -i) {
            ret += tree[i];
        }
        return ret;
    }
};

int main() {
    fastio;
    int n, mn = 1e9;
    cin >> n;
    vector<pair<int, int>> v(n);
    vector<int> I;
    for (auto&[x, y]: v) {
        cin >> x >> y;
        I.push_back(y);
    }
    sort(v.begin(), v.end());
    Compress(I);
    Fenwick FT1(n), FT2(n);
    for (auto&[x, y]: v) {
        FT2.Update(IDX(I, y), 1);
    }
    auto Sol = [&](const int sz1, const int sz2) -> int {
        int lo = 0, hi = I.size(), ret = 1e9;
        while (lo + 1 < hi) {
            const int mid = lo + hi >> 1;
            const int t1 = FT1.Query(mid), t2 = FT2.Query(mid);
            (max(t1, t2) < max(sz1 - t1, sz2 - t2) ? lo : hi) = mid;
        }
        for (int i = lo; i <= hi; ++i) {
            const int t1 = FT1.Query(i), t2 = FT2.Query(i);
            ret = min(ret, max({t1, sz1 - t1, t2, sz2 - t2}));
        }
        return ret;
    };
    for (int i = 0; i <= n - 1;) {
        mn = min(mn, Sol(i, n - i));
        for (const int x = v[i].first; i < n && v[i].first == x; ++i) {
            const int y = IDX(I, v[i].second);
            FT1.Update(y, 1), FT2.Update(y, -1);
        }
    }
    cout << mn;
    return 0;
}