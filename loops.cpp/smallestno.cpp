#include <iostream>
using namespace std;

int main(){
     int n,ans=9;
     cout<<"Enter a number :";
     cin>>n;
     while(n>0){
      int digit=n%10;
      if(digit<ans){
         ans=digit;
      }
      n=n/10;
     }
     cout<<ans;
}