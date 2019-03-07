#include <iostream>


using namespace std;

double amount;
char choice;
int q;
int d;
int n;
int p;
double rate;
int change;

void menu(){
	cout << "Please choose: " << endl;
	cout << "1. Show 15% tip amount." << endl;
	cout << "2. Show equivalent amount in coins. " << endl;
	cout << "3. Exchange rate value (need to enter value." << endl;
}

void tip(){
	cout << "15% tip amount: $" << amount*0.15 << endl;
}

void coins(){
	change= amount * 100;
	q = change/25;
	
	change = change%25;
	d = change/10;
	
	change = change%10;
	n = change/5;
	
	change = change%5;
	p = change/1;
	
	cout << "$" << amount << " in coins is: " << endl;
	cout << q << " Quarters, " << d << " Dimes, " << n 
	<< " Nickels, " << p << " pennies." << endl;
}

void exch(){
	cout << "Enter Exchange rate: ";
	cin >> rate;
	cout << "Amount in that rate is: $" << rate*amount << endl;
}

int main(){
	cout << "Enter amount: " ;
	cin >> amount;
	cout << endl;
	
	char again = 'Y' && 'y';
	
	do{
		menu();
		cin>> choice;
		switch(choice){
			case '1':
				tip();
			break;
			
			case '2':
				coins();
			break;
			
			case '3':
				exch();
			break;
			
			default:
				cout << choice << " is not valid..." << endl;
		}
		
	
		cout << "\nDo you need to go again(Y/N): " ;
		cin >> again;
		
	}while('n' != again);
	
	return 0;
	
}