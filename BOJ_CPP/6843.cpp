#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[26], arr2[26];

int main() {
    fastio;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] != ' ') {
            ++arr1[s1[i] - 'A'];
        }
    }
    for (int i = 0; i < s2.length(); ++i) {
        if (s2[i] != ' ') {
            ++arr2[s2[i] - 'A'];
        }
    }
    for (int i = 0; i < 26; ++i) {
        if (arr1[i] != arr2[i]) {
            cout << "Is not an anagram.";
            return 0;
        }
    }
    cout << "Is an anagram.";
    return 0;
}