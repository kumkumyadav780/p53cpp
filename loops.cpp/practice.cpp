#include<iostream>
using namespace std;
int main()
{
 int n,min=9;
 cout<<"Enter number :";
 cin>>n;
 while(n>0){
 int digit=n%10;
 if(digit<min){
     min=digit;
 }
 n=n/10;
}
cout<<"Min no is = "<<min;
}
