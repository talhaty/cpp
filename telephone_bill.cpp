#include <iostream>
#include <iomanip>
using namespace std;
const double 
	//REGULAR 
	regular_service=50.00,
	r_charges_p_min=0.20,//first 50 minutes are free
	//PREMIUM
	premium_service=25.00,
	p_charges_p_min1=0.10,//calls betweer 6am to 6pm....first 75 minuted are free
	p_charges_p_min2=0.05;//calls betweer 6pm to 6am....first 100 minuted are free
int main()
{
	double bill,bill1,bill2,r_total_min,p_total_min1,p_total_min2,total_min,i=0;
	int acc_no;
	char code;
	cout<<fixed<<setprecision(3);
	cout<<"\t\t\t***WELCOME TO CELLULAR TELEPHONE COMPANY BILLING SERVICE***"<<endl;
	cout<<"Enter your account number: "<<endl;
	cin>>acc_no;
	cout<<"Enter your service code\n\t'P' or 'p' for PREMIUM SERVICE\n\t'R' or 'r' for REGULAR SERVICE: "<<endl;
	cin>>code;
	switch (code)
	{
		case 'r':
		case 'R':
			{
				cout<<"Enter the number of minutes the telephone sevice was used for: "<<endl;
				cin>>r_total_min;
				if (r_total_min<=50)
					bill=regular_service;
				else
				{
					i=r_total_min-50;
					bill=regular_service+(i*r_charges_p_min);
					total_min=r_total_min;
				}
				system("cls");
		cout<<setfill('.')<<setw(30)<<left<<"ACCOUNT NUMBER = \t"<<acc_no<<endl;
		cout<<setfill('.')<<setw(30)<<left<<"SEERVICE CODE = \t"<<code<<endl;
		cout<<setfill('.')<<setw(30)<<left<<"TOTAL MINUTES SERVICE WAS USED = \t"<<total_min<<endl;
		cout<<setfill('.')<<setw(30)<<left<<"TOTAL BILL = \t"<<bill<<endl;
	
		break;
			}
		case 'p':
		case 'P':
			{
				cout<<"Enter the number of minutes the telephone sevice was used between 6am to 6pm: "<<endl;
				cin>>p_total_min1;
				cout<<"Enter the number of minutes the telephone sevice was used between 6pm to 6am: "<<endl;
				cin>>p_total_min2;
				if(p_total_min1<=75)
					bill1=0;
				else
					if(p_total_min1>75)
					{
						i=p_total_min1-75;
						bill1=p_charges_p_min1*i;
					}
				if(p_total_min2<=100)
				{
					bill2=0;
				}
				else 
					if(p_total_min2>100)
					{
						i=p_total_min2-100;
						bill2=i*p_total_min2;
					}
				bill=premium_service+bill1+bill2;
				total_min=p_total_min1+p_total_min2;
				system("cls");
			cout<<setfill('.')<<setw(30)<<left<<"ACCOUNT NUMBER = \t"<<acc_no<<endl;
			cout<<setfill('.')<<setw(30)<<left<<"SEERVICE CODE = \t"<<code<<endl;
			cout<<setfill('.')<<setw(30)<<left<<"TOTAL MINUTES SERVICE WAS USED = \t"<<total_min<<endl;
			cout<<setfill('.')<<setw(30)<<left<<"TOTAL BILL = \t"<<bill<<endl;
	
			break;
			}
		default:
			cout<<"wrong input..."<<endl;
		}
	return 0;
}
