#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n;cin>>t;
    for(int tc=1;tc<=t;++tc) {
        cin >> n;vector<int>v(n);
        for(int i=0;i<n;++i)cin>>v[i];
        int ans=0;
        for(int i=1;i<v.size()-1;++i)if (v[i] > v[i - 1] && v[i] > v[i + 1])++ans;
        cout<<"Case #"<<tc<<": "<<ans<<"\n";
    }
}