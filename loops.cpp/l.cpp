#include<iostream>
using namespace std;
int main()
{
// int n,first=0,second=1,next;
// cout<<"Enter a number :";
// cin>>n;
// cout<<first<<" ";
// cout<<second<<" ";
// for(int i=1;i<=n-2;i++){
// next=first+second;
// first=second;
// second=next;
// cout<<next<<" ";
// }

int n;
cout<<"Enter a number :";
cin>>n;
if(n<2){
cout<<"Not prime.";
return 0;
}
for(int i=2;i*i<=n;i++){
if(n%i==0){
cout<<"Not prime.";
return 0;
}
}
cout<<"Prime";


}