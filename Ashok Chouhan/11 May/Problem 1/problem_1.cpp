#include<iostream>
using namespace std;

int main ()
{ 
  int size;
  cout << "Enter size of array: " << endl;
  cin >> size;
  
  int *arr = new int[size];
  
  cout << "Enter elements of array: " << endl;
  for(int i=0;i<size;i++) 
    cin >> arr[i];
  int res = arr[0];
  
  for (int j = 1; j < size; j++) 
      res ^= arr[j];
	    
  cout << "Result: " << res;
  delete arr;
}
