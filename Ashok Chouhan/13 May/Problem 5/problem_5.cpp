#include<bits/stdc++.h>
using namespace std;

int isMagicNumber(int n)
{
	int q,r,sum=0;
	
	q=n;
	while(q)
	{
		r=q%10;
		sum=sum+r;
		q=q/10;
	}
	if(sum==1) 
	   return 1;
	else
	{
	 if(sum>9)
	 {
	   q=sum;
	   sum=0;
	   while(q)
	   {
		r=q%10;
		sum=sum+r;
		q=q/10;
      }
	  if(sum==1) 
	    return 1;
	   else
	    return 0;
	 }	
	}
	return 0;
}


int main()
{
	cout<<"\n Magic Numbers are: \n";
	for(int i=1;i<=1000;i++)
	{
		if(isMagicNumber(i)==1) cout<<i<<" ";
	}
}
