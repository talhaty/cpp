#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void save(string); 
void display(string);

int main()
{
	string name;
	int choice=1;
	while(choice==1 || choice==2)
	{
		system("cls");
		cout<<"Want to save somthing enter 1"<<endl
			<<"want to show your message enter 2"<<endl
			<<"enter any other key to exit "<<endl;
		cin>>choice;
		cout<<"enter your first name: "<<endl;
		cin>>name;
		switch(choice)
		{
			case 1:
				save(name);
				break;
			case 2:
				display(name);
				break;
			default:
				cerr<<"error \nINVALID INPUT"<<endl;
		}
		system("pause");
	}
	return 0;
}

void save(string x)
{
	string message;
	ofstream safe;
	safe.open("vault",ios::app);
	cout<<"Enter a message you want to give to the user"<<endl;
	cin.ignore(1);
	getline(cin,message);
	safe<<x<<" "<<message<<endl;
	safe.close();
}

void display(string x)
{
	string y,z;
	ifstream disp;
	disp.open("vault");
	
	while(disp)
	{
		disp>>y;
		if(y==x)
		{
			getline(disp,z);
			
		}	
	}
	cout<<z<<endl;
	disp.close();
}
