#include<bits/stdc++.h> 
using namespace std; 

int main() 
{	 
 	int num;
	cout << "Enter number : " ;
    cin >> num;

	if (num == 0 || num == 1) cout << "Output: "<<num; 

	else
	{
		int start = 1, end = num, ans; 
		while (start <= end) 
		{		 
			int mid = (start + end) / 2; 
	
			if (mid*mid == num) 
				return mid; 
	
			
			if (mid*mid < num) 
			{ 
				start = mid + 1; 
				ans = mid; 
			} 
			else end = mid-1;		 
		} 
	 
		cout << "Output: "<<ans;
	}
}
