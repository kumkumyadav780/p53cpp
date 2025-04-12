#include<iostream>
using namespace std;
int main()
{
 int n,max=0;
 cout<<"Enter number :";
 cin>>n;
 while(n>0){
 int digit=n%10;
 if(digit>max){
  max=digit;
 }
 n=n/10;
 }
cout<<max;

}