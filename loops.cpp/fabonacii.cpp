#include<iostream>
using namespace std;
int main()
{
//   int n,first=0,second=1,next;
//   cout<<"Enter number :";
//   cin>>n;
//   for(int i=1;i<=n;i++){
//   if(i==1){
//   cout<<first;
//   continue;
//   }
//   if(i==2){
//  cout<<second;
//  continue;
//   }
//   next=first+second;
//   first=second;
//   second=next;
//   cout<<next<<"\t";
//   }







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
  ans=ft+i*d;
cout<<ans;

}
}