#include<iostream>
#include<string>
using namespace std;
int main() {
	int balance = 10000;
	int count = 1;
	int pin, pass = 6767;
	cout << "**********WELCOME TO ATM**********" << endl;
	cout << "Enter you 4 digits Pin" << endl;
	cin >> pin;
	do {
		if (pin != pass) {
			cout << "Enter the correct pin" << endl;
			cin >> pin;
		}
		count++;
	} while (count < 3 && pin != pass);
	if (pin == pass) {
		string exit;
		do {
			int check,deposit,withdraw;
			cout << "***************ATM MENU***************"<<endl;
			cout << "FOR CHECKING ACCOUNT BALANCE Press=1" << endl;
			cout << "FOR DEPOSIT******************Press=2" << endl;
			cout << "FOR WITHDRAW*****************Press=3" << endl;
			cout << "FOR EXIT*********************Press=4" << endl;
			cin >> check;
			switch (check) {
			case 1: {
				cout << "Your account balalnce is= " << balance<<endl;
				break;
			}
			case 2: {
				cout << "How much amout you want to deposit:" << endl;
				cin >> deposit;
				balance += deposit;
				cout << "Thnanks your money is sucessfully deposited"<<endl;
				cout << "Your updated amount is " << balance<<endl;
				break;
			}
			case 3: {
				cout << "How much amout you want to withdraw:" << endl;
				cin >> withdraw;
				if (balance < withdraw) {
					cout << "Enterd amount is more than your current balance Enter valid amount" << endl;
					break;
				}
				else {
					balance -= withdraw;
					cout << "Thnanks your money is sucessfully Withdrawed Collect your Cash"<<endl;
					cout << "Your remaining balance is " << balance<<endl;
					break;
				}
			}
			case 4: {
				cout << "Thank you; Good Bye" << endl;
				break;
			}
			default: {
				cout << "Invalid Number Entered"<<endl;
				break;
			}
			}
			cout << "Do you want to exit( yes / no ) " <<endl;
			cin >> exit;
		} while (exit != "yes" && exit != "Yes");
	}
	else {
		cout << "Incorrect Pin Your Account is freezed";
	}
	return 0;
}