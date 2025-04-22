#include<iostream>
using namespace std;
int main()
{

 int start,end;
 cout<<"Enter starting number :";
 cin>>start;
 cout<<"Enter ending number :";
 cin>>end;
 cout<<"prime numbers between "<<start <<"and"<<end<<"are:";
 for(int i=start;i*i<end;i++){
if(start%i==0){
 cout<<"not prime";
 return 0;
}
 }
 cout<<"prime";
}