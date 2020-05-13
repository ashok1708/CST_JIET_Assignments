#include<bits/stdc++.h>
using namespace std;

int isEven(vector<int> ar)
{
	int res=1;  
	for(int i=0;i<ar.size();i++)
	{
		if(ar[i]%2!=0) 
		   res=0;
	}
	return res;  // 0 for false and 1 for true;
}

int main()
{
	vector<int> ar={5,9,4,5,2,1,8,9,6,10,12,11,14};
	vector<vector<int>> sd;
	int cnt=0;
	
	for(int i=0;i<ar.size();i++)
	{
		vector<int> d;
		for(int j=i;j<ar.size();j++)
		{
		  d.push_back(ar[j]);
		  sd.push_back(d);
		}
		
    }
   
	for(int i=0;i<sd.size();i++)
	{
     	if(isEven(sd[i])==1)
		{
		 cnt++;
		 	cout<<"{";
		 for(int j=0;j<sd[i].size();j++)
		 {
		   cout<<" "<<sd[i][j];	
	     }
	     cout<<"}"<<endl;
		}
		
	}
	cout<<"\n\n Total even subsets : "<<cnt;
	
	
}
