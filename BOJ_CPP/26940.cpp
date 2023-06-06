#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int antal = 0;
    int last = 100;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp > last)
            antal++;
        last = tmp;
    }
    cout << antal << endl;
    return 0;
}