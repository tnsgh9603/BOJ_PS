#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[10][10],v[10][10],n,m,k=64,x,y;
int f1(int c, int r){
    int cnt=1;
    if(c<0 || r<0 || c>=n || r>=m || v1[c][r] || arr[c][r] == 1) {
        return 0;
    }
    v1[c][r]=1;
    cnt+=f1(c+1,r);cnt+=f1(c,r+1);cnt+=f1(c-1,r);cnt+=f1(c,r-1);
    return cnt;
}
int f(){
    int cnt=0;
    for(int i =0;i<n;i++) for(int j =0; j<m;j++) if(arr[i][j] == 2 && !v1[i][j]) cnt+=f1(i, j);
    return cnt;
}
void go(int s, int l){
    if(l==3){
        for(int i=0;i<n;i++)for(int j=0;j<m;j++) v1[i][j]=0;
        y=f();
        k=k>y?y:k;
        return;
    }
    for(int i =s; i<n*m;i++){
        int a=i/m,b=i%m;
        if(!arr[a][b])arr[a][b]=1,go(s + 1, l + 1), arr[a][b]=0;
    }
}
int main(){
    scanf("%arr %arr",&n,&m);
    for(int i =0; i < n ;i++) for(int j =0; j<m;j++) scanf("%arr",&arr[i][j]), x= arr[i][j] == 1 ? x + 1 : x;
    go(0,0);
    printf("%arr",n*m-x-3-k);
}