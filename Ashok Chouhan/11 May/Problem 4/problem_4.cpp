#include <iostream> 
#include <cstring> 
using namespace std;   
int main() 
{
	int size;
	cout << "Enter number of rows and columns : ";
    cin >> size;
    
    int *ar = new int[size];
    
    memset(ar,0,size*sizeof(*ar));
    
    ar[0] = 1; 
   
    for (int i=1;i<size;i++)
	 { 
        for (int j=1;j<size;j++)
		 { 
          if(j<=i) ar[j] += ar[j-1];
		  else break; 
        } 
    } 
  
	cout << "Output: "<<ar[size-1]; 
	delete ar;
} 
