#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a;
    cin >> a;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a * 3; ++j) {
            cout << "@";
        }
        for (int j = 0; j < a; ++j) {
            cout << " ";
        }
        for (int j = 0; j < a; ++j) {
            cout << "@";
        }
        cout << '\n';
    }

    for (int i = 0; i < a * 3; ++i) {
        for (int j = 0; j < a; ++j) {
            cout << "@";
        }
        for (int j = 0; j < a; ++j) {
            cout << " ";
        }
        for (int j = 0; j < a; ++j) {
            cout << "@";
        }
        for (int j = 0; j < a; ++j) {
            cout << " ";
        }
        for (int j = 0; j < a; ++j) {
            cout << "@";
        }
        cout << '\n';
    }
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            cout << "@";
        }
        for (int j = 0; j < a; ++j) {
            cout << " ";
        }
        for (int j = 0; j < a * 3; ++j) {
            cout << "@";
        }
        cout << '\n';
    }
}