#include<iostream>
using namespace std;
int main()
{
  int n,sum=0,x1,x2;
  cout<<"Enter number :";
  cin>>n;
  x1=n%10;
  x1=sum+x1;
  n=n/10;
  x2=n%10;
  x2=sum+x2;
  n=n/10;
  sum=x1+x2;


  

  cout<<sum;

  return 0;
}