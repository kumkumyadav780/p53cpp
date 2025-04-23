#include<iostream>
using namespace std;
int main()
{
// ap series

// a+n-1*d
// a=first term
// n=nth termd=common difrrence

int ft,n,d;
int ans;
cout<<"enter your fist term and n th term,difrence";
cin>>ft>>n>>d;
for(int i=ft;i<=n;++i)
{
  ans=ft+(n-1)*d;
  
}
cout<<ans;
}