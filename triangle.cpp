#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int z=20;
	for(int x=20;x>10;x-=1)
	{
		cout<<setw(x);
		z-=2;
		for(int y=19;y>z;y-=1)
		{
			cout<<'*';
		}
		cout<<endl;
	}
return 0;
}
