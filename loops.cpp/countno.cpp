#include<iostream>
using namespace std;
int main()
{
 
//print number 1 to 100 and count?
int n,count=0;
cout<<"Enter number :";
cin>>n;
for( int i=1; i<=n; i++){
  cout<<i<<" ";
  count++;
}
cout<<"count = "<<count;

return 0;
}