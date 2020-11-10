#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int x;
	cout<<"enter the total number of integers"<<endl;
	cin>>x;
	int num[x];
	srand(time(0));
	for(int d=0; d<x;d++)
	{
		num[d]=rand()%100;
		cout<<num[d]<<" ";
	}
	cout<<endl<<endl;
	for(int a=0;a<x-1;a++)
	{
		for(int b=a+1;b<x;b++)
		{
			if(num[a]>num[b])
			{	int z;
				z=num[a];
				num[a]=num[b];
				num[b]=z;
			}
		}
	}
	for(int c=0;c<x;c++)
	{
		cout<<num[c]<<" ";
	}
}
