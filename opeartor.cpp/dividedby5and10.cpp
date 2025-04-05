//Que- Check the number is divided by 5 and 10 ?

#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter number :";
  cin>>n;
  
  cout<<(n%5==0 && n%10==0? "divisible":"Not Divisible");

  return 0;

}