#include<iostream>
using namespace std;
int main()
{
//  for(int i=1;i<=5;i++){
//   for(int j=5;j>=1;j--){
//  if(i>=j){
//   cout<<" *";
//  }
//  else{
//  cout<<" ";
//  }
//   }
//   cout<<endl;
//  }


//factors?
int n;
cout<<"Enter number :";
cin>>n;
for(int i=1;i<=n;i++){
 if(n%i==0){
cout<<"fact ="<<i;
 }
}

}