//SwatTheBugs17.cpp - displays the bonus due for sales over $10,000
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double RATE = 0.1;
	double sales = 0.0;
	double bonus = 0.0;

	//enter input
	cout << "Enter the sales amount: ";
	cin >> sales;

	//display output
	if sales > 10000.0
		bonus = sales * RATE;
		cout << fixed << setprecision(2);
		cout << "Bonus: $" << bonus << endl;
	else
		cout << "Sorry, you do not get a bonus." << endl;
	//end if
	return 0;
}	//end of main function