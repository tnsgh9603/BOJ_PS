#include<bits/stdc++.h>
int main(){int a,b,g;scanf("%d:%d",&a,&b);g=std::gcd(a,b);printf("%d:%d",a/g,b/g);}