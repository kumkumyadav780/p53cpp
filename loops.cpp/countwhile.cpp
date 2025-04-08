#include<iostream>
using namespace std;
int main(){
        
    int num,count=0;
    cout<<"Enter a Number: ";
    cin>>num;

    for(num; num>0 ; num/=10){
        count++;
    }

    cout<<count;
}