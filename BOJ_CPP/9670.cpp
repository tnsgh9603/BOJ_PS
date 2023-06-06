#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
struct arr { int p, h, w; };
int main() {
    fastio;
    arr1 d[8] = {
            {319,1024,768},
            {419,1024,600},
            {450,960,640},
            {519,2048,1536},
            {599,1136,640},
            {600,1280,800},
            {630,1080,1920},
            {719,1136,640}
    };
    double h, w;
    while (cin >> h >> w && h) {
        double rat = 0;
        int ans;
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 2; ++j) {
                int x, y;
                if (h / w > (double)d[i].h / d[i].w) {
                    x = d[i].h;
                    y = (double)w * d[i].h / h;
                }
                else {
                    x = (double)h * d[i].w / w;
                    y = d[i].w;
                }
                if ((double)x * y / (d[i].h * d[i].w) > rat) {
                    rat = (double)x * y / (d[i].h * d[i].w);
                    ans = i;
                }
                swap(h, w);
            }
        }
        cout << d[ans].p << "\n";
    }
    return 0;
}