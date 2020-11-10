#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	int abc,d=0,x,z,a=0,b=0,c=0,count=0;
	cout<<"enter total numbers: ";
	cin>>x;
	int num[x];
	while(c<x)
	{
		num[c]=rand()%100;
		cout<<num[c]<<" ";
		c++;
	}

	while(a<x)
	{
		d=0;
		while(d<(x-1))
		{
			if(num[d]>num[d+1]){
			z=num[d];
			num[d]=num[d+1];
			num[d+1]=z;
			}
			d++;
		}
		a++;
	}
	cout<<endl;
	while(b<x)
	{
		cout<<num[b]<<" ";
		b++;
	}
	cout<<endl;
	int lm=0;
	while(count<x)
	{
		int frequency=0;
		int check=0;
		abc=num[count];
		while(check<x)
		{
			if(num[count]==num[check])
			{
				frequency++;
			}
			check++;
		}
		abc=num[count];
			if(abc!=lm)
			{
			cout<<"freaquency of "<<num[count]<<"="<<frequency<<endl;
			lm=num[count];
			}
		
			
		
		
		count++;
	}
	return 0;
}
