#include <iostream>
using namespace std;
int main()
{
	int guess;
	int high =50;
	int low =0;

	char choice;
	
	high+=1;
	
	cout<<"Think about a number between "<<low<<" and "<<high-1<<". \n\n";
	guess = ( high+low ) / 2;

	while(guess>low)
	{
	    cout<<"Is your number greater than or equal to "<<guess<<" ? \nEnter y or n. \n";
	    cin>>choice;
	    cout<<endl;
	
	    if(choice=='y' || choice=='Y') 
		{
	        low = guess;
	        if(high-low==1) 
				guess=low;
	        else 
				guess = ( high + low ) / 2;
	    }
	    else if(choice=='n' || choice=='N') 
		{
	        high = guess;
	    	if(high-low==1) 
				guess=low;
	        else 
				guess = ( high + low ) / 2;
	    
		}
	}
	
	cout<<"number: "<<guess<<endl;
}
