#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

string arr[50];
bool visited[32];

int main() {
    fastio;
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    string str;
    cin >> str;
    for (string s: arr) {
        auto f = s.find(str);
        if (f == 0 && s.size() > str.size()) {
            visited[s[str.size()] - 62] = 1;
        }
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (visited[i * 8 + j]) {
                cout << (char) (i * 8 + j + 62);
            } else {
                cout << '*';
            }
        }
        cout << '\n';
    }
    return 0;
}