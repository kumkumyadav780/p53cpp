#include<iostream>
using namespace std;
int main()
{
  /*int n,ans=0;
  cout<<"Enter number :";
  cin>>n;
  for(int i=1;i<n;i++){
    if(n%i==0){
      ans=ans+i;
    }
  }
  
  if(ans==n){
    cout<<"Perfect.";
  }
  else{
    cout<<"Not Perfect.";
  }/*/
  
  int base,power,ans=1;
  cout<<"Enter base and power :";
  cin>>base>>power;
  for(int i=1;i<=power;i++){
    ans=ans*base;
  }
  cout<<ans;
  
  
  
  
  /*int n=121,rev=0,ans;
  ans=n;
  while(n>0){
    int digit= n%10;
    rev=rev*10+digit;
    n=n/10;
  }
  
  if(ans==rev){cout<<"Palindrom.";}
    else{cout<<"Not palindron.";}*/
  
 
 
 
  /* program to Reverse any number ?
  int n,rev=0;
 cout<<"Enter number :";
 cin>>n;
 while(n>0){
  rev=rev*10+n%10;
  n=n/10;
 }
 cout<<rev;*/
 
 
 /*find factorial of a number?
  int fact=1;
  for(int i=1; i<=5; i++)
  {
    fact=fact*i;
  }
  cout<<"fact = "<<fact;*/
  
  
  
 
 
  /* print table ?
  int n;
  cout<<"Enter number :";
  cin>>n;
  for(int i=1 ; i<=10; i++){
    cout<<n*i<<" ";
   
  }*/
 


  
  
  
/*Calculate the sum of n from 1 to n ?
  int n,sum=0;
  cout<<"Enter number :";
  cin>>n;
  for(int i=1 ; i<=n; i++)
  {
    sum=sum+i;
  }
  cout<<"sum = "<<sum;*/
  
  
  
  
  
  /*print number 1 to 100 and count?
int count=0;
for( int i=1; i<=100; i++){
  cout<<i<<" ";
  count++;
}
cout<<"count = "<<count;*/

return 0;
}