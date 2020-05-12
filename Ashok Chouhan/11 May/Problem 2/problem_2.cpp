#include<iostream>
#include<algorithm>

using namespace std;
#define MAX 100000

  
int main() 
{ 
    int size;
    cout << "Enter size of array: " ;
    cin >> size;
    int *arr = new int[size];
    
    cout << "Enter elements of array: " << endl;
    for(int i=0;i<size;i++)
	  cin >> arr[i];
    
    sort(arr,arr+size); 
  
    int minXor = MAX; 
    int val = 0; 
  
    for (int i=0;i<size-1;i++) 
	{ 
        minXor = min(minXor, arr[i] ^ arr[i + 1]); 
    } 
    
    cout <<"Output: "<<minXor << endl; 
    
    
    delete arr;
    

} 
