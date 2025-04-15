#include<iostream>
using namespace std;
int main()
{
int start,end;
int evensum=0,oddsum=0;
cout<<"Enter the starting number :";
cin>>start;
cout<<"Enter the ending number :";
cin>>end;
 for(int i=start; i<=end; ++i){
 
 if(i%2==0)
 evensum=evensum+i;
 
 else
 oddsum=oddsum+i;
 }
 cout<<"Sum of even number :"<<evensum<<endl;
 cout<<"Sum of odd number :"<<oddsum<<endl;

 }




