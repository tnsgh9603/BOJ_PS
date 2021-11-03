#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
string arr;
int arr[31];
int main(){
    fastio;
    int t;
    cin >> t;
    while(t--) {
        cin >> arr;
        memset(arr, 0, sizeof(arr));
        bool flag = 1;
        for(int i = 0; i < arr.length(); ++i){
            ++arr[arr[i] - 'A'];
            if(arr[arr[i] - 'A'] % 3 == 0){
                if(i != arr.length() - 1 && arr[i + 1] == arr[i]) {
                    ++i;
                }
                else{
                    cout << "FAKE\n";
                    flag = 0;
                    break;
                }
            }
        }
        if(flag) {
            cout << "OK\n";
        }
    }
    return 0;
}