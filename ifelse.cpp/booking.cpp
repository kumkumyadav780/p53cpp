#include<iostream>
using namespace std;
int main()
{ 
  int date;
  string des,month;
  cout<<"Enter your destination :";
  cin>>des;
  if(des=="j&k"){
 cout<<"Enter date and month :";
 cin>>date>>month;
  if(date<30 && month=="april"){
   cout<<"you got 40% discount."<<endl;
   cout<<"ticket price is 20000."<<endl;
   cout<<"After discount ticket price is ="<<20000-(20000*40/100)<<endl;
  }
   else if(date>7 && date<30 && month=="may"){
    cout<<"you got 20% discount."<<endl;
    cout<<"ticket price is 15000."<<endl;
    cout<<"After discount ticket price is ="<<15000-(15000*20/100)<<endl;

}
 else if(date<7 && month=="may"){
  cout<<"No discount."<<endl;
  cout<<"Ticket price is 10000"<<endl;
 }
 else{
  cout<<"Invalid.";
 }
}
 if(des=="goa"){
  cout<<"Enter date and month :";
  cin>>des;
  if(date<30 && month=="april"){
    cout<<"you got 40% discount.";
    cout<<"ticket price is 15000."<<endl;
    cout<<"After discount ticket price is ="<<15000-(15000*40/100)<<endl;
  }
  else if(date>7 && date<30 && month=="may"){
    cout<<"you got 20% discount."<<endl;
    cout<<"ticket price is 10000."<<endl;
    cout<<"After discount ticket price is ="<<10000-(10000*20/100)<<endl;
  }
  else if(date<7 && month=="may"){
    cout<<"No discount."<<endl;
    cout<<"Ticket price is 8000"<<endl;
   }
   else{
    cout<<"Invalid";
   }
  }

  
else{
  cout<<"Invalid.";
}






  return 0;
}