#include<iostream>
using namespace std;
int main(){
        
    int num,ans=9;
    cout<<"Enter a Number: ";
    cin>>num;
 while(num>0){
    int digit = num%10;
    if(digit<ans){
        ans=digit;
    }
    num=num%10;
 }
 cout<<ans;

}