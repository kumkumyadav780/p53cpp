#include<iostream>
using namespace std;
int main()
{
 int sal,hra,da,total;
 cout<<"Enter your salary :";
 cin>>sal;
 if(sal<=10000){
 cout<<"DA is 80% "<<(sal*80/100);
 cout<<"HRA is 20% "<<(sal*20/100);
}
else if(sal>10000 && sal<=20000){
 cout<<"DA is 90% "<<(sal*90/100);
 cout<<"HRA is 25% "<<(sal*25/100);
}
else if(sal<=20000){
 cout<<"DA is 95% "<<(sal*90/100);
 cout<<"HRA is 30% "<<(sal*30/100);
}
total=sal+hra+da;
cout<<"total salary is :"<<total;
}