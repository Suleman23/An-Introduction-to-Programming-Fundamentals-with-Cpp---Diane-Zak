#include<iostream>
using namespace std;
int main(){
	//Declare variables
	double beginningBalance = 0.0;
	double totalDeposit = 0.0;
	double totalWithdrawals = 0.0;
	double balance = 0.0;
	
	//Enter values
	cout << "Enter Beginning Balance: ";
	cin >> beginningBalance;
	cout << "Enter Total Deposit: ";
	cin >> totalDeposit;
	cout << "Enter Total Withdrawals: ";
	cin >> totalWithdrawals;
	
	//calculate Balance
	balance =  beginningBalance + totalDeposit - totalWithdrawals;
	
	//display Balance
	cout << "Balance: " << balance;
	
}
