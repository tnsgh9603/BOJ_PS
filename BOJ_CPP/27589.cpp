#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    unordered_map<std::string, int> roads;
    int numRoads, numQueries;
    cin >> numRoads >> numQueries;

    for (int i = 0; i < numRoads; i++) {
        string road;
        cin >> road;
        roads.insert({road, i});
    }

    for (int i = 0; i < numQueries; i++) {
        string road1, road2;
        cin >> road1 >> road2;
        if (0 == road1.compare(road2)) {
            cout << "0\n";
        } else {
            int index1, index2;
            index1 = roads.at(road1);
            index2 = roads.at(road2);
            int ans = abs(index1 - index2) - 1;
            cout << ans << endl;
        }
    }

    return 0;
}
