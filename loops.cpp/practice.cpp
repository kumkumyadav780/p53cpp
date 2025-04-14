#include<iostream>
using namespace std;
int main()
{
  int base,power;
  int ans;
  cout<<"Enter base :";
  cin>>base;
  cout<<"Enter power :";
  cin>>power;
  for(int i=1;i<=power;i++){
 ans =  base*base*base;
  }
  cout<<ans;
}
