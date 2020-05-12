#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,res;
	
	cout<<"Enter the first number : ";
	cin>>a;
	
    cout<<"Enter the first number : ";
	cin>>b;
	
	for(int i=a;i<b;i++)
	{
		if(a%i==0 && b%i==0) cout<<i<<endl; 
	}
	return 0;
}
