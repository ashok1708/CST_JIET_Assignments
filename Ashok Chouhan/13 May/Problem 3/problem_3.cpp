#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n1,n2,res;
	
	cout<<"Enter the first number  : ";
	cin>>n1;
	
	cout<<"Enter the second number : ";
	cin>>n2;
	
	for(int i=2; i<=n1 && i<=n2; ++i)
	{
		if(n1%i==0 && n2%i==0)
		   res=i;
	}
	cout<<"GCD of "<<n1<<" and "<<n2<<" : "<<res<<endl;
}
