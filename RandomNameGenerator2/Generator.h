#ifndef GENERATOR_H
#define GENERATOR_H
#include <string>

using namespace std;

class Generator {
public:
	bool isNameMale(int input);

	string* getFirstName(int code, bool isMale, int count);
	string* getSurname(int code, int count);

private:

};

#endif