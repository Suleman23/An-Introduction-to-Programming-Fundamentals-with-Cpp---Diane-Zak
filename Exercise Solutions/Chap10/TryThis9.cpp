//TryThis9.cpp - displays the age entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

//function prototype
void getAge(int years);

int main()
{
	int age = 0;
	getAge(age);
	cout << "You are " << age << " years old." << endl;
	return 0;
}	//end of main function

//*****function definitions*****
void getAge(int years)
{   
	cout << "Enter an age: ";
	cin >> years;
}  //end of getAge function