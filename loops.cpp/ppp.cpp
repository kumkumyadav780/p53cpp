#include<iostream>
using namespace std;
int main()
// {
//   int n,sum=0,ans=0;
//   cout<<"Enter number :";
//   cin>>n;
//   ans=sum;
//   while(n>0){
//     sum=sum*10+n%10;
  
//     n=n/10;
//   }
//   cout<<ans;




//   cout<<ans;

//   return 0;
// }

{







 

 int sn=6;
 int ln=17;
int lcm;
for(int i=ln;   ;i=i+ln)
{
  if(i%sn==0 && i%ln==0)
  {
    lcm=i;
    break;

  }

}

cout<<lcm;

}