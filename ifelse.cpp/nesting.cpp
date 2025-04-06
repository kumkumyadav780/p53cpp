#include<iostream>
using namespace std;
int main()
{
  string w;
  cout<<"Enter your wesite name :";
  cin>>w;
  if(w=="flipkart"){
    cout<<"Enter product or service :";
    cin>>w;
  if(w=="product"){
    cout<<"Enter shoes or clothes :";
    cin>>w;
  if(w=="shoes"){
    cout<<"1000";
  }
  else if(w=="clothes"){
    cout<<"2000";
  }
    else{
      cout<<"Invalid.";
    }
  }
  else if(w=="service"){
    cout<<"Not available";
  }
  else{
    cout<<"Invalid.";
  }
}
else{
  cout<<"Invalid";
}
}