#include<iostream>
using namespace std;
 int main()
 {
 int x=1;
 for(int i=1;i<=5;i++){
  for(int j=1;j<=4;j++){
  if(i<=5-j){
 cout<<x++;
  }
  else{
 cout<<" ";
  }
  }
  cout<<endl;
 }
 }