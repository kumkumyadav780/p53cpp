#include<iostream>
using namespace std;
int main()
{ 
 int n,sum=0;
 cout<<"Enter number :";
 cin>>n;
 int ans=n;
 while(n>0){
 int digit=n%10;
 sum=sum+digit*digit*digit;
 n=n/10;
}
if(ans==sum){
 cout<<"armstrong";
}
else{
  cout<<"not armstrong";
}
}