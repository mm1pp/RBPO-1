#include "Header.h"


#ifndef DO_NOT_DEFINE_MAIN
int main() {
	string name = "";
	unsigned short age = 0, weight = 0;
	double salary = 0;
	ReadPersonData(name, age, salary);
	WritePersonData(name, &age, to_string(height), to_string(weight), to_string(salary));
	ReadPersonData(name, age, height, weight);
	WritePersonData(name, &age, to_string(height), to_string(weight), to_string(salary));
	return 0;
}
#endif