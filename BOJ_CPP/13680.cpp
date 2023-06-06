#include<iostream>
int main(){int a,b,c,d;while(std::cin>>a>>b>>c>>d&&a)std::cout<<(a==c&&b==d?0:abs(a-c)==abs(b-d)||a==c||b== d?1:2)<<"\n";}