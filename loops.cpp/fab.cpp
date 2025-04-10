//program for fabonacci series another method?
 #include<iostream>
using namespace std;
int main()
{
  int n,first=0,second=1,next;
  cout<<"Enter a number :";
  cin>>n;
  cout<<first<<"\t"<<second<<"\t";
  for(int i=1;i<=n-2;i++){
  next=first+second;
  first=second;
  second=next;
  cout<<next<<"\t";

  }
  return 0;
}