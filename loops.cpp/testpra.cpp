#include<iostream>
using namespace std;
int main()
{
 int n,rev=0,ans;
 cout<<"Enter number :";
 cin>>n;
 ans=n;
 while(n>0){
 int digit=n%10;
 rev=rev*10+digit;
 n=n/10;
 }
 if(ans==rev){
 cout<<"palindrome";
 }
 else{
 cout<<"not palindrome";
 }
}