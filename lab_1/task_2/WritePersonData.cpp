#include "Header.h"

void WritePersonData(const string& name, const unsigned short* age, const string& height, const string& weight, string salary) {
	cout << "Name:\t" << name << endl
		<< "Age:\t" << *age << endl
		<< "Height:\t" << height << endl
		<< "Weight:\t" << weight << endl
		<< "Salary:\t" << salary << endl;
}
