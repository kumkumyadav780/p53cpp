#include<iostream>
using namespace std;
int main(){

  string com;
  int sal;
  cout<<"Enter your company name :";
  cin>>com;
  if(com=="Bajaj"){
    cout<<"Ente your salary : ";
    cin>>sal;
  if(sal>0 && sal<=20000){
    cout<<"a/c to your salary we will give you 15000 loan."<<endl;
    cout<<"After 10% interest your loan is =" <<(15000*10/100)+15000<<endl;
    cout<<"Your total loan amount for 12 months as per month amount is ="<< ((20000*20/100)+20000)/12<<endl; 
  }
  else if(sal>20000 && sal<=30000){
    cout<<"a/c to your salary we will give you 20000 loan."<<endl;
    cout<<"After 20% interest your loan is =" <<(20000*20/100)+20000<<endl;
    cout<<"Your total loan amount for 24 months, as per month amount is ="<< ((20000*20/100)+20000)/12<<endl; 
  }
}
else{
  cout<<"Invalid.";
}
}

