#include <iostream>
using namespace std;
int main()
{
	int num1, num2, a;
	bool check;
	cin>>num1;
	cin>>num2;
	while(num1<num2)
	{
		num1++;
		a=2;
		check=true;
		while(a<(num1/2))
		{
			if(num1%a==0)
			{
				check=false;
				break;
			}
			a++;
		}
		if(check)
		{
			cout<<num1<<" ";
		}
	}
	while(num2<num1)
	{
		num2++;
		a=2;
		check=true;
		while(a<(num2/2))
		{
			if(num2%a==0)
			{
				check=false;
				break;
			}
			a++;
		}
		if(check)
		{
			cout<<num2<<" ";
		}
	}
}
