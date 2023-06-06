#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double a, b, bmi;
    cin >> a >> b;
    bmi = a / (b * b);
    cout << (bmi > 25 ? "Over" : bmi < 18.5 ? "Under" : "Normal ") << "weight";
    return 0;
}