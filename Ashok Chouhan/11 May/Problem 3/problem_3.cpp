#include<iostream>
using namespace std;
  
int main() 
{ 
    int size, blocks = 0;
    cout << "Enter number of square blocks: " ;
    cin >> size;
    
    for(int i=1;;i++)
	{
      size -= i;
      if(size < 0)
	  {
    	cout <<"Output: "<< blocks;
    	break;
	  }
		else blocks += 1;
    	
	}     
} 
