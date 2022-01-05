#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main(){
    fastio;
    int n;
    cin >> n;
    set<string> SET;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        SET.insert(s);
    }
    int m;
    cin >> m;
    for(int i = 1; i <= m; ++i){
        vector<string> v;
        string s;
        while(cin >> s && s != "-1"){
            if(SET.find(s) == SET.end()){
                v.push_back(s);
            }
        }
        if(!v.empty()){
            cout << "Email " << i << " is not spelled correctly.\n";
            for(string S : v){
                cout << S << "\n";
            }
        }else{
            cout << "Email " << i << " is spelled correctly.\n";
        }
    }
    cout << "End of Output";
    return 0;
}