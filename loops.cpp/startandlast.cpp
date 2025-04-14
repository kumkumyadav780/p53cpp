#include<iostream>
using namespace std;
int main()
{
 int start,end;
 cout<<"Enter the range of start :";
 cin>>start;
 cout<<"Enter the end range :";
 cin>>end;
 cout<<"Number divisible by 3 and 5 are = ";
for(int i=start;i<=end;i++){
    if(i%3==0 && i%5==0){
        cout<<i<<" ";
    }
}
cout<<endl;
}
