#include<iostream>
using namespace std;
int main()
{
int sum=0;
for(int i=1;i<=100;i++){
if(i%2==0){
 cout<<i<<" ";
  sum=sum+i;
}

}
cout<<"sum of even number from 1 to 100 ="<<sum;

return 0;
}