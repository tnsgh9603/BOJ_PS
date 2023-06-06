#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

string places[7] = {
        "Ottawa",
        "Victoria",
        "Edmonton",
        "Winnipeg",
        "Toronto",
        "Halifax",
        "St. John's"
};

int difference[7] = {
        0,
        -300,
        -200,
        -100,
        0,
        100,
        130
};

int n;

int newTime(int i) {
    int nTime = n + difference[i], hour = nTime / 100, min = nTime % 100;
    if (min >= 60) {
        ++hour;
        min -= 60;
    } else if (min < 0) {
        --hour;
        min += 100;
    }
    if (hour < 0) {
        hour += 24;
    } else if (hour >= 24) {
        hour -= 24;
    }
    return hour * 100 + min;
}

int main() {
    fastio;
    cin >> n;
    for (int i = 0; i < 7; ++i) {
        cout << newTime(i) << " in " << places[i] << "\n";
    }
    return 0;
}