#include <iostream>
using namespace std;   
int main(){

int n=5;
  for(int r=1; r<=n ;r++){
   
     for(int c=1;c<=n;c++){

          if(c<=r){
              cout<<char(c+96);
          }
          else{
            cout<<" ";
          }
     }
    cout<<endl;
  }

}