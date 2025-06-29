// #include<iostream>
// using namespace std;
// int main()
// {
// // hcf
// // int n1,n2,hcf;
// // cout<<"Enter n1 and n2 :";
// // cin>>n1>>n2;
// // for(int i=n1;i<=n1 && i<=n2;i++){
// //     if(n1%i==0 && n2%i==0){
// //  hcf=i;
// //     }
// // }
// // cout<<hcf;

// //lcm
// // int n1=6,n2=112,lcm;
// // for(int i=n1; ;i=i+n1){
// //  if(i%n1==0 && i%n2==0){
// //  lcm=i;
// //  break;
// //  }
// // }
// // cout<<lcm;

// //prime no
// // int n=5;
// // for(int i=2;i<n;i++){
// //  if(n%i==0){
// //  cout<<"not prime";
// //  return 0;
// //  }
// // }
// // cout<<"prime";

// // int n=1;
// // if(n<2){
// //  cout<<"not prime";
// //  return 0;
// // }
// // for(int i=2;i*i<n;i++){
// //  if(n%i==0){
// //  cout<<"not prime";
// //  return 0;
// //  }
// // }
// // cout<<"prime";

// //perfect no
// // int n=6,sum=0;
// // for(int i=1;i<n;i++){
// //  if(n%i==0){
// //  sum=sum+i;
// //  }
// // }
// // if(n==sum){
// //  cout<<"perfect";
// // }
// // else{
// //  cout<<"not perfect";
// // }

// // to find exponential
// // int base=3,power=2,ans=1;
// // for(int i=1;i<=power;i++){
// // ans=base*ans;
// // }
// // cout<<ans;

// //armstrom
// // int n=153,sum=0;
// // int ans=n;
// // while(n>0){
// // int digit=n%10;
// // sum=sum+digit*digit*digit;
// // n=n/10;
// // }
// // if(ans==sum){
// //  cout<<"armstrom";
// // }
// // else{
// //  cout<<"not armstrom";
// // }

// // reverse number
// // int n=132,rev=0;
// // while(n>0){
// //  int digit=n%10;
// //  rev=rev*10+digit;
// //  n=n/10;
// // }
// // cout<<rev;

// //count number
// // int n=111111,count=1;
// // for(int i=1;i<=n;i++){
// // n=n/10;
// // count++;
// // }
// // cout<<"count= "<<count;

// //fabonacci series
// // int n,first=0,second=1,next;
// // cout<<"enter number :";
// // cin>>n;
// // cout<<first<<" "<<second<<" ";
// // for(int i=1;i<=n-2;i++){
// // next=first+second;
// // first=second;
// // second=next<<" ";
// // cout<<next;
// // }

// // int x=11;
// // int y=-5;
// // int z;
// // z=y++;
// // y=--x;
// // x=--z;
// // cout<<z<<endl;
// // cout<<y<<endl;
// // cout<<x<<endl;


// // int a=10;
// // int b=2;
// // int c;
// // c=++a;
// // a=--b;
// // b=c++;
// // cout<<c<<endl;
// // cout<<a<<endl;
// // cout<<b<<endl;


// // int a=5,b=3,c;
// // c=a++ + --b;
// // a= --c;
// // b=b++;
// // cout<<c<<endl;
// // cout<<a<<endl;
// // cout<<b<<endl;
// // int m=7,n=2,p;
// // p=++m - n--;
// // m=p--;
// // n=++m;
// // cout<<m<<endl;
// // cout<<n<<endl;
// // cout<<p<<endl;


// // int i=10,j=5,k;
// // k=i-- - --j;
// // j=++k;
// // i=j--;
// // cout<<i<<endl;
// // cout<<j<<endl;
// // cout<<k<<endl;

// // int x=4,y=6,z;
// // z=x++ + ++y;
// // y= --z;
// // x=y--;
// // cout<<x<<endl;
// // cout<<y<<endl;
// // cout<<z<<endl;

// // int a=8,b=3,c;
// // c=--a - b++;
// // a= ++c;
// // b= a--;
// // cout<<a<<endl;
// // cout<<b<<endl;
// // cout<<c<<endl;


// // int p=12,q=5,r;
// // r=p-- + q++;
// // q=++r;
// // p=--q;
// // cout<<p<<endl;
// // cout<<q<<endl;
// // cout<<r<<endl;

// // int a=3;
// // int b=a++ + ++a;
// // cout<<b;

// // int x=5;
// // int y=x++ + ++x;
// // cout<<y;

// // int a=10;
// // int b=a++ - --a + ++a -a--;
// // cout<<b;

// // int x=1;
// // int y= ++x + x++ + ++x;
// // cout<<y;

// // int i=1;
// // i=i++ + ++i *i++;
// // cout<<i;

// // int n,fact=1;
// // cout<<"Enter number :";
// // cin>>n;
// // for(int i=1;i<=n;i++){
// // fact=fact*i;
// // }
// // cout<<fact;

// // int n,fact=1;
// // cout<<"Enter number :";
// // cin>>n;
// // for(int i=1;i<=n;i++){
// // fact=fact*i;
// // }
// // cout<<"fact = "<<fact;

// // int n,rev=0;
// // cout<<"Enter number :";
// // cin>>n;
// // while(n>0){
// // int digit=n%10;
// // rev=rev*10+digit;
// // n=n/10;
// // }
// // cout<<rev;

// // int n,rev=0;
// // cout<<"Enter number :";
// // cin>>n;
// // int ans=n;
// // while(n>0){
// // int digit=n%10;
// // rev=rev*10+digit;
// // n=n/10;
// // }
// // if(rev==ans){
// //  cout<<"Palindrom";
// // }
// // else{
// // cout<<"Not palindrom";
// // }

// // int n,min=9;
// // cout<<"Enter number :";
// // cin>>n;
// // for(int i=1;i<=n;i++){

// // }

// // int n,sum=0;
// // cout<<"Enter number :";
// // cin>>n;
// // for(int i=1;i<=n;i++){
// // if(n%i==0){

// // }
// // }

// int n,sum=0;
// cout<<"Enter number :";
// cin>>n;
// for(int i=1;i<=n;i++){
// if(n%i==0){

// }
// }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//  int n,rev=0;
//  cout<<"Enter a number :";
//  cin>>n;
//  int ans=n;
//  while (n>0)
//  {
// int digit=n%10;
//  rev=rev*10+digit;
//  n=n/10;
 

//  }
//  cout<<rev;
// }

