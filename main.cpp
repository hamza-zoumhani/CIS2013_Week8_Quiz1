#include <iostream>


using namespace std;

double amount;
char choice;
int q;
int d;
int n;
int p;
double rate;

void menu(){
	cout << "Please choose: " << endl;
	cout << "1. Show 15% tip amount." << endl;
	cout << "2. Show equivalent amount in coins. " << endl;
	cout << "3. Exchange rate value (need to enter value." << endl;
}

void tip(){
	cout << "15% tip amount: " << amount*0.15 << endl;
}

void coins(){
	if (amount % 0.25 = 0){
		cout << amount << " is " << amount/0.25 << " int quarters" << endl;
	}
}

void exch(){
	cout << "Enter Exchange rate: ";
	cin >> rate;
	cout << "Amount in that rate is: " << rate*amount << endl;
}

int main(){
	cout << "Enter amount: " ;
	cin >> amount;
	cout << endl;
	
	char again = 'Y' && 'y';
	
	do{
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
		}
	}while('n' != again);
		

	
	
	
	
	
	return 0;
	
}