#include<iostream>
using namespace std;
int main()
{ 
 int n1,n2,lcm;
 cout<<"Enter number 1 :";
 cin>>n1;
 cout<<"Enter number 2 :";
 cin>>n2;
 for(int i=n1; ;i=i+n1){
  if(i%n1==0 && i%n2==0){
    lcm=i;
    break;
  }
 }
 cout<<lcm;
}