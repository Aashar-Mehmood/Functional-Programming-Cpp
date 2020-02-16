#include <iostream>
#include <cstdlib>
using namespace std;
float duration_in_minutes;
float cost;
void call_cost(string day, float start_time, float end_time);
int main ()
{
	string calling_day;
	float s_time, e_time;
	char choice;
	top:
	cout<<"Enter the calling day (first two letters only) : ";
	getline(cin, calling_day);
	cout<<endl;
	cout<<"Enter the call start time (in 24 hours format): ";
	cin>>s_time;
	cin.ignore();
	cout<<endl;
	cout<<"Enter the call end time (in 24 hours format): ";
	cin>>e_time;
	cin.ignore();
	cout<<endl;
	call_cost(calling_day, s_time, e_time);
	cout<<"Do you want to calcualte another call rate? Enter Y or N : ";
	cin>>choice;
	cin.ignore();
	cout<<endl;
//Checks wheter user wants to calculate another call cost//
	switch (choice){
		    case 'y':
			goto top;
			break;
			
			case 'Y':
			goto top;
			break;
			default:
			exit(0);
	}
	return 0;
	}
	//function to calculate call cost//
void call_cost(string day, float start_time, float end_time){

	duration_in_minutes=(end_time-start_time)*(60.0);
	if ((day=="mo")||(day=="MO")||(day=="Mo")||(day=="tu")||(day=="TU")||(day=="Tu")||(day=="we")||(day=="WE")||(day=="We")||(day=="TH")||(day=="th")||(day=="Th")||(day=="Fr")||(day=="FR")||(day=="fr"))
{
	if ((start_time>8) && (start_time<18))
	{
		cost = duration_in_minutes*0.4;
		cout<<"The cost of your call is : "<<cost<<endl;
		cout<<endl;
	
	}
	else if ((start_time<8 )||(start_time>18))
	{
		cost = duration_in_minutes*0.25;
		cout<<"The cost of your call is : "<<cost<<endl;
		cout<<endl;

	}
	}
	else if ((day=="SA")||(day=="Sa")||(day=="sa")||(day=="SU")||(day=="Su")||(day=="su"))
	{
		cost = duration_in_minutes*0.15;
		cout<<"The cost of your call is : "<<cost<<endl;
		cout<<endl;
	
	}
	
}
