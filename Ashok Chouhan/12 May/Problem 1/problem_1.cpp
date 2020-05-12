#include<bits/stdc++.h> 
using namespace std; 

int main()
{
	int A,B,C,res=0;
	vector<int> arr;
	
	cout<<"Number A : ";
	cin>>A;
	
	cout<<"Number B : ";
	cin>>B;
	
	cout<<"Number C : ";
	cin>>C;
	
	for(int i=1;i<=A;i++)
	{
		if(i%B==0 && i%C==0) 
		{
		 res++;
		 arr.push_back(i);
	    }
	}
	cout<<"Result : "<<res<< " (";
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" " ;
	}
	cout<<")"<<endl;
	return 0;
}
