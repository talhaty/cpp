#include <iostream>
using namespace std;
void board();
int check();
char place[9]={'1','2','3','4','5','6','7','8','9'};
int main()
{
	int player=1,choice,i;
	char mark;
	
	do
	{
	
		system("cls");
		board();
	
		if(player%2)
			player=1;
	
		else
			player=2;
	
		if(player==1)
			mark='X';
	
		else
			mark='O';
	
		cout<<"Player "<<player<<"\' turn: ";
		cin>>choice;
	
		if(choice==1 && place[0]=='1')
			place[0]=mark;
	
		else if (choice==2 && place[1]=='2')
			place[1]=mark;
	
		else if (choice==3 && place[2]=='3')
			place[2]=mark;
	
		else if (choice==4 && place[3]=='4')
			place[3]=mark;
	
		else if (choice==5 && place[4]=='5')
			place[4]=mark;
	
		else if (choice==6 && place[5]=='6')
			place[5]=mark;
	
		else if (choice==7 && place[6]=='7')
			place[6]=mark;
	
		else if (choice==8 && place[7]=='8')
			place[7]=mark;
	
		else if (choice==9 && place[8]=='9')
			place[8]=mark;
	
		else
        {
            cout<<"Invalid move ";
			--player;
            cin.ignore();
            cin.get();
        }
    
	    ++player;
        i=check();	
	}
	while(i==-1);
	
	if(i==1)
		{
		--player;
		cout<<"Player "<<player<<" wins"<<endl;
		}
	
	if(i==0)
		cout<<"MATCH DRAW "<<endl;
}


int check()
{

	if (place[0]==place[1] && place[0]==place[2])
		return 1;

	else if(place[3]==place[4] && place[3]==place[5])
		return 1;

	else if(place[6]==place[7] && place[6]==place[8])
		return 1;

	else if(place[0]==place[3] && place[0]==place[6])
		return 1;

	else if(place[1]==place[4] && place[1]==place[7])
		return 1;

	else if(place[2]==place[5] && place[2]==place[8])
		return 1;

	else if(place[0]==place[4] && place[0]==place[9])
		return 1;

	else if(place[2]==place[4] && place[2]==place[6])
		return 1;

	else if(place[0]!='1' && place[1]!='2'&& place[2]!='3' &&
	        place[3]!='4' && place[4]!='5'&& place[5]!='6' &&
			place[6]!='7' && place[7]!='8'&& place[8]!='9'   )
		return 0;

	else
		return -1;
}


void board()
{

	cout<<"     ******************"<<endl;
	cout<<"---PLAYER 1 (X)--PLAYER 2(O)---\n"<<endl;

	cout<<"\t"<<place[0]<<" | "<<place[1]<<" | "<<place[2]<<endl;
	cout<<"\t----------"<<endl;
	cout<<"\t"<<place[3]<<" | "<<place[4]<<" | "<<place[5]<<endl;
	cout<<"\t----------"<<endl;
	cout<<"\t"<<place[6]<<" | "<<place[7]<<" | "<<place[8]<<endl;

	cout<<"\n\n";	
}
