#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    // nitromefan 님 코드 참조
    fastio;
    int n;
    cin >> n;
    string s;
    getline(cin, s);
    for (int i = 0; i < n; ++i) {
        getline(cin, s);
        for (char c: s) {
            if (c == 'A' || c == 'a') {
                cout << (char) ((int) c + 'e' - 'a');
            } else if (c == 'E' || c == 'e') {
                cout << (char) ((int) c + 'i' - 'e');
            } else if (c == 'I' || c == 'i') {
                cout << (char) ((int) c + 'o' - 'i');
            } else if (c == 'O' || c == 'o') {
                cout << (char) ((int) c + 'u' - 'o');
            } else if (c == 'U' || c == 'u') {
                cout << (char) ((int) c + 'y' - 'u');
            } else if (c == 'Y' || c == 'y') {
                cout << (char) ((int) c + 'a' - 'y');
            } else {
                cout << c;
            }
        }
        cout << "\n";
    }
    return 0;
}