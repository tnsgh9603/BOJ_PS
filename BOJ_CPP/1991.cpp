#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
vector<pair<char, char>> n[26];

void preorder(int n) {
    cout << char('A' + n);
    char left = n[n][0].first, right = n[n][0].second;
    if (left != '.') {
        preorder(left - 'A');
    }
    if (right != '.') {
        preorder(right - 'A');
    }
}

void inorder(int n) {
    char left = n[n][0].first, right = n[n][0].second;
    if (left != '.') {
        inorder(left - 'A');
    }
    cout << char('A' + n) << "";
    if (right != '.') {
        inorder(right - 'A');
    }
}

void postorder(int n) {
    char left = n[n][0].first, right = n[n][0].second;
    if (left != '.') {
        postorder(left - 'A');
    }
    if (right != '.') {
        postorder(right - 'A');
    }
    cout << char('A' + n);
}

int main() {
    fastio;
    int n;
    cin >> n;
    int root;
    for (int i = 0; i < n; ++i) {
        char a, b, c;
        cin >> a >> b >> c;
        if (i == 0) {
            root = a - 'A';
        }
        n[a - 'A'].push_back({b, c});
    }
    preorder(root);
    cout << "\n";
    inorder(root);
    cout << "\n";
    postorder(root);
    return 0;
}