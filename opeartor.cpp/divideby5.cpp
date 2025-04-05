//Que- Check the number is multiple of 2 and greater than 100 ?

#include<iostream>
using namespace std;

int main()
{
 int n;
 cout<<"Enter any Number :";
 cin>>n;
 cout<<(n%5==0&&n>100?"Yes":"No");

 return 0;

}