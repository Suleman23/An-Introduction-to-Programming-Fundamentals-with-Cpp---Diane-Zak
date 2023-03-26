/** Start your C++ development tool, and view the SwatTheBugs17.cpp file. The file is contained in either the Cpp8\Chap05\SwatTheBugs17 Project folder or the Cpp8\Chap05
folder. (Depending on your C++ development tool, you may need to open this exercise’s solution/project file first.) The program should display a 10% bonus for sales over
$10,000. Correct the syntax errors, and then save, run, and test the program**/

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
	if (sales > 10000.0)
	{
	
		bonus = sales * RATE;
		cout << fixed << setprecision(2);
		cout << "Bonus: $" << bonus << endl;
	}
	else
		cout << "Sorry, you do not get a bonus." << endl;
	//end if
	return 0;
}	//end of main function
