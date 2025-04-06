#include<iostream>
using namespace std;
 int main()
 {
int marks;
cout<<"Enter your marks :";
cin>>marks;
if(marks>0 && marks<=30){
  cout<<"C Grade.";
}
else if(marks>30 && marks<=60){
cout<<"B Grade.";
}
else if(marks>60 && marks<=100){
 cout<<"A Grade.";
}
else{
  cout<<"D Grade.";
}

  return 0;
 }