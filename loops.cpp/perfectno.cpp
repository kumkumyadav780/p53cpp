#include<iostream>
using namespace std;
int main()
{
 int n,ans=0;
 cout<<"Enter number :";
 cin>>n;
 for(int i=1;i<n;++i){
 if(n%i==0){
 ans=ans+i;
 }
 }
 if(ans==n){
 cout<<"perfect";
 }
 else{
 cout<<"Not perfect";
 }

 
}