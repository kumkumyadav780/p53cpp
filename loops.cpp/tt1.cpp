#include<iostream>
using namespace std;
int main()
{
 for(int r=1;r<=4;r++){
  for(int c=1;c<=4;c++){
 if(c<=r){
  cout<<" &";
 }
 else{
 cout<<" ";
 }
  }
  cout<<endl;
 }
}