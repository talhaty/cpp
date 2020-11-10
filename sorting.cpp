#include <iostream>
using namespace std;
int main()
{
	int array[10]={3,4,2,1,6,2,4,5,8,9};
	int smallest=array[0],z=10,temp;
	for(int y=0;y<10;y++)
	{
		int x=y;
		for(;x<z;x++)			
		{
			if(array[y]>array[x])
			{
				temp=array[x];
				array[x]=array[y];
				array[y]=temp;
				
			}
		}
		cout<<array[y]<<" ";
	}
		
}
