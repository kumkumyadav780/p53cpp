#include<iostream>
using namespace std;
int main()
{
   string mob;
   int sal;
  cout<<"Enter mobile name :";
  cin>>mob;
  if(mob=="realme"){
    cout<<"Enter your salary :";
    cin>>sal;
  if(sal>0 && sal<=30000){
   cout<<"Enter 12pro or 12promax :";
   cin>>mob;
  if(mob=="12pro"){
   cout<<"Mobile price is 20000." <<endl;
   cout<<"After 5% interest mobile price is ="<<(20000*5/100)+20000 <<endl;
   cout<<"Your total emi for 24 months as per month emi is =" <<((20000*5/100)+20000)/24 <<endl;
  }
  else if(mob=="12promax"){
   cout<<"Mobile price is 30000.";
   cout<<"After 5% interest mobile price is ="<<(30000*5/100)+30000 <<endl;
   cout<<"Your total emi for 24 months as per month emi is ="<<((20000*5/100)+20000)/24 <<endl;
  }
  else{
   cout<<"Invalid.";
  }
  }
  else if(sal>30000 && sal<=70000){
  cout<<"Enter 13 or 13pro :";
  cin>>mob;
  if(mob=="13"){
  cout<<"Mobile price is 40000.";
  cout<<"After 10% interest mobile price is=" <<(40000*10/100+40000)<<endl;
cout<<"Total emi of 24 months as per month emi is ="<<((40000*10/100+40000)/12)<<endl;
  }
  else if(mob=="13pro"){
   cout<<"Mobile price is 50000.";
   cout<<"After 10% interest mobile price is=" <<(50000*10/100+50000)<<endl;
cout<<"Total emi of 24 months as per month emi is ="<<((50000*10/100+50000)/12)<<endl;
  }
  else{
   cout<<"Invalid.";
  }
  }
  else if(sal>70000){
  cout<<"Enter 14 or 14pro :";
  cin>>mob;
  if(mob=="14"){
   cout<<"Moblie price is 55000.";
   cout<<"After 15% interest mobile price is=" <<(55000*15/100+55000)<<endl;
cout<<"Total emi of 24 months as per month emi is ="<<((55000*15/100+55000)/6)<<endl;
  }
  else if(mob=="14pro"){
   cout<<"Mobile price is 60000.";
   cout<<"After 15% interest mobile price is=" <<(60000*15/100+60000)<<endl;
cout<<"Total emi of 24 months as per month emi is ="<<((60000*15/100+60000)/6)<<endl;
  }
  }
  else{
   cout<<"Invalid.";
  }
  }
  else{
    cout<<"Invalid :";
  }
}