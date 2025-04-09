#include<iostream>
using namespace std;

int main()
{
 int num;
 cout<<"Enter a Number: ";
 cin>>num;

 if(num<2){
  cout<<"Not a Prime";
  return 0;
 }

 for(int i=2 ; i*i<=num ; i++){

  if(num%i==0){
    cout<<"Not a Prime";
    return 0;
  }
 }

 cout<<"Prime";
}




// #include<iostream>
// using namespace std;
// int main()
// {
// int sum=0;
// for(int i=1;i<=100;i++){
// if(i%2==0){
//  cout<<i<<" ";
//   sum=sum+i;
// }

// }
// cout<<"sum of even number from 1 to 100 ="<<sum;

// return 0;
// }