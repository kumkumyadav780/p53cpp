#include<iostream>
using namespace std;
int main()
{
  int pa;
  cout<<"Enter purchase amount :";
  cin>>pa;
  if(pa>=5000){
 cout<<"You got 20% discount.";
 cout<<"After 20% discount pa is ="<<pa-(pa*20/100);
  }
  else if(pa>=3000 && pa<=5000){
 cout<<"You got 15% discount.";
 cout<<"After 15% discount pa is ="<<pa-(pa*15/100);
  }
  else if(pa>=1000 && pa<=3000){
 cout<<"You got 10% discount.";
cout<<"After 10% discount pa is ="<<pa-(pa*10/100);
  
  }
                        
else if (pa>0 && pa<=1000){
cout<<"No discount.";
}
  else{
    cout<<"Invalid.";
  }

}