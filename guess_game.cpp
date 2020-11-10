#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int exit,random_int,guess,count=0;
	srand(time(0));
	random_int=rand()%100;
	exit=1;
	while(exit)
	{
		cout<<"ENTER A NUMBER BETWEEN 0 and 100"<<endl;
		cin>>guess;
		if(guess>=0 && guess<100)
		{
			if(guess>random_int )
			{
				cout<<"too high"<<endl;
			}
			else if (guess<random_int)
			{
				cout<<"Too low"<<endl;
			}
			else if(random_int==guess)
			{
				cout<<"correct guess"<<endl;
				exit=0;
			}
			count++;
		}
		else
		{
			cout<<"INVALID INPUT"<<endl;
		}
	}
	cout<<"Total guesses: "<<count<<endl;
	if(count<10)
		cout<<"you are lucky or you know the secret"<<endl;
	else if(count==10)
		cout<<"you know the secret"<<endl;
	else
		cout<<"you are bad at guessing"<<endl;
	return 0;
}
