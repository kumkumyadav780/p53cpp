  #include<iostream>
 using namespace std;
 int main()
 { 
   int unit;
   cout<<"Enter electricity units consumed :";
   cin>>unit;
   if(unit<=100){
   cout<<"Per unit rupee is 5.";
   cout<<"so your unit is ="<<unit*5;
   }
    else if(unit>101 && unit<300){
                       cout<<"Per unit rupee is 7.";
                       cout<<"so your unit is ="<<unit*7;
    }
    else{
      cout<<"Invalid";
    }
    
   
}