#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n1,n2,h,d,r,l;
  
   cout<<"Enter the first number  : ";
	cin>>n1;
	
	cout<<"Enter the second number : ";
	cin>>n2;
	
 if(n1 && n2)
 {
  h=n1;
  d=n2;
  r=d%h;
   while(r)
   {
    d=h;
    h=r;
    r=d%h;
   }
 }
 else
 {
  l=0;
 }
 l=(n1*n2)/d;
 
	cout<<"LCM of "<<n1<<" and "<<n2<<" : "<<l<<endl;
}
