#include<iostream>
using namespace std;
int main()
{
  int n,next,first=0,second=1;
  cout<<"Enter a number :";
  cin>>n;
  for(int i=1;i<=n;i++){
  if(i==1){
  cout<<first;
  }
  if(i==2){
  cout<<second;
  }
  next=first+second;
  first=second;
  second=next;
  cout<<next<<"\t";
  
  }
  return 0;
}