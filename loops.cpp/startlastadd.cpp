#include<iostream>
using namespace std;
int main()
{
 int n,first,last,temp;
 cout<<"Enter number :";
 cin>>n;
 if(n<10){
  cout<<"Invalid input";
  return 0;
 }
 temp=n;
 last=n%10;
 while(temp>=10){
 temp=temp/10;
 first=temp;
 }
 cout<<first+last;
}
