#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

struct stage {
    double m, t, F;
};

int main() {
    fastio;
    stage stages[61];
    int K;
    cin >> K;
    for (int i = 1; i <= K; ++i) {
        int n;
        double height = 0, currVel = 0, weight;
        cin >> n >> weight;
        for (int x = 0; x < n; ++x) {
            cin >> stages[x].m >> stages[x].t >> stages[x].F;
            weight += stages[x].m;
        }
        for (int x = 0; x < n; ++x) {
            double a = stages[x].F / weight - 9.81;
            height += currVel * stages[x].t + 0.5 * stages[x].t * stages[x].t * a;
            currVel += a * stages[x].t;
            weight -= stages[x].m;
        }
        cout << "Data Set " << i << ":\n" << fixed << setprecision(2) << height << "\n";
    }
    return 0;
}