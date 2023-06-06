#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[] = {0, 0, 5, 7, 13, 23, 17, 19, 23, 37, 61, 67, 61, 71, 47}, arr2[] = {0, 0, 3, 7, 11, 13, 17, 29, 23, 43, 41,
                                                                                 73, 59, 47, 89};

int main() {
    fastio;
    string s;
    int n;
    getline(cin, s);
    stringstream ss(s);
    vector<int> v;
    while (ss >> n) {
        v.push_back(n);
    }
    for (int i = 0; i < v.size(); ++i) {
        cout << "N = " << v[i] << " FORTUNATE = " << arr1[v[i]] << " LESS = " << arr2[v[i]] << "\n";
    }
    return 0;
}