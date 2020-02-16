#include <iostream>
using namespace std;
void balance(int account_balance);
int main(){
	char choice;
	int money;
	top:
	cout<<"Enter your account balance : ";
	cin>>money;
	cout<<endl;
	balance(money);
	cout<<endl;
	cout<<"Do you want to calcualte for another amount? Enter Y or N : ";
	cin>>choice;
	cin.ignore();
	cout<<endl;
//Checks wheter user wants to continue or not //
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
void balance(int account_balance){
	float interest, total_amount_due, min_payment;
	if (account_balance<=1000){
		interest=1.5*(1000/100);
	}
	else if (account_balance>1000){
		interest=(1.5*(1000/100))+(1*((account_balance-1000)/100));
	}
	cout <<"The total ineterest is : " <<interest <<" $"<<endl;
	cout <<endl;
	total_amount_due=account_balance+interest;
	cout<<"The total amount due is : " <<total_amount_due <<" $"<<endl;
	cout<<endl;
	if (total_amount_due<=10){
	min_payment=total_amount_due;	
	}
	else if (total_amount_due>10)
	{
		min_payment=10;
	}
	cout <<"The minimum payment is "<<min_payment<<" $"<<endl;
	cout <<endl;
}

