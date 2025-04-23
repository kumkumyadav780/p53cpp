#include<iostream>
using namespace std;
int main()
{
 int n,sum=0,ans;
 cout<<"Enter number :";
 cin>>n;
 ans=n;
 while(n>0){
 int digit =n%10;
 sum=sum+digit*digit*digit;
 n=n/10;
 }
 if(ans==sum){
 cout<<"armstong";
 }
 else{
 cout<<"not arm";
 }
}