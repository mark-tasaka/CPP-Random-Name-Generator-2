#include<iostream>
#include<string>
#include "Generator.h"
#include "MaleNameGiven.h"
using namespace std;

bool Generator::isNameMale(int input)
{
	if (input == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


string* Generator::getFirstName(int code, bool isMale, int count)
{
	string* firstName = new string[count];

	if (isMale == true)
	{
		MaleNameGiven maleName = MaleNameGiven();

		firstName = maleName.getFirstName(code, count);
	}/*
	else
	{
		FemaleNameGiven femaleName = FemaleNameGiven();

		firstName = femaleName.getFirstName(code, count);
	}*/

	return firstName;
}

/*
string* Generator::getSurname(int code, int count)
{
	string* surname = new string[count];

}*/