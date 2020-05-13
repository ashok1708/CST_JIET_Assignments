#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> ar={5,4,2,8,17,8};
	int od=0,ev=0;
	
	for(int i=0;i<ar.size();i++)
	{
		if(ar[i]%2==0)
		   ev++;
		else
		   od++;
	}
	cout<<"Result : "<<min(ev,od);
}
