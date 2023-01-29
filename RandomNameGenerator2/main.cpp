#include<iostream>
#include<fstream>
#include <iomanip>
#include<ctime>
#include<cstdlib>
#include "Generator.h"
#include "MaleNameGiven.h"
using namespace std;



int main()
{

	srand(time(0));

	bool isMale = true;
	int numberOfNames = 50;
	int firstNameSelect = 2;

	cout << "Hello World" << endl;

	Generator test1 = Generator();

	MaleNameGiven testName = MaleNameGiven();

	string* firstName = new string[numberOfNames];

	firstName = testName.getFirstName(firstNameSelect, numberOfNames);

	//string* firstName[];
	//firstName = test1.getFirstName(firstNameSelect, isMale, numberOfNames);

	cout << firstName[0] << endl;


	for (int i = 0; i < numberOfNames; i++)
	{
		cout << firstName[i] << " " << endl;
	}


	return 0;


}
