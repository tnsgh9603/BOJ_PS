#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int p;
        cin >> p >> ws;
        vector<double> v1;
        vector<vector<int>> v2;
        for (int i = 0; i < p; ++i) {
            vector<int> v3;
            string s;
            getline(cin, s);
            string temp1 = ", ";
            size_t pos = 0;
            while ((pos != -1)) {
                pos = s.find(temp1);
                string temp2 = s.substr(0, pos);
                s.erase(0, pos + 2);
                int temp3 = stoi(temp2);
                temp3 = min(100, temp3);
                v3.push_back(temp3);
            }
            v2.push_back(v3);
        }
        int mx1 = 0;
        for (auto i: v2) {
            mx1 = max(mx1, int(i.size()));
        }
        for (auto i: v2) {
            double avg = 0;
            for (int j = 0; j < i.size(); ++j) {
                avg += i[j];
            }
            avg /= mx1;
            double sum = 0;
            for (int j = 0; j < i.size(); ++j) {
                double temp;
                temp = avg - (j >= i.size() ? 0 : i[j]);
                temp *= temp;
                sum += temp;
            }
            sum /= mx1;
            v1.push_back(sum);
        }
        int num = 0;
        double mx2 = 0;
        for (int j = 0; j < v1.size(); ++j) {
            if (mx2 < v1[j]) {
                mx2 = v1[j];
                num = j + 1;
            }
        }
        cout << fixed << setprecision(2) << num << "\t" << mx2 << "\n";
    }
    return 0;
}