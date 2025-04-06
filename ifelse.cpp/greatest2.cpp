//Que- Find the greatest b/w two number ?
#include<iostream>
using namespace std;
  int main()
  {
   int num1,num2;
   cout<<"Enter two numbers: ";
   cin>>num1>>num2;
   if(num1>num2){
   cout<<"Greatest number is=" <<num1 <<endl;
   }
   else if(num2>num1)
   {
     cout<<"Greatest number is =" <<num2<<endl;
   }
   else{
 cout<<"Both are equal.";
   }



  return 0;
  }