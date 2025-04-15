#include<iostream>
using namespace std;
int main()
{
 int sn,ln,hcf;
 cout<<"Enter sn and ln :";
 cin>>sn>>ln;
 for(int i=1;i<=sn;i++){
 if(sn%i==0 && ln%i==0){
  hcf=i;
 }
 }
 cout<<hcf;
}