#include <iostream>
#include <string>
using namespace std;

unsigned short height;

unsigned short ReadPersonAge(void) {
	unsigned short age;
	cin >> age;
	return age;
}

string ReadPersonName(void) {
	string name;
	cin >> name;
	return name;
}

void ReadPersonHeight(void) { cin >> height; }

void ReadPersonWeight(unsigned short& weight) { cin >> weight; }

void ReadPersonSalary(double* salary) { cin >> *salary; }

void WritePersonData(const string& name, const unsigned short* age, const string& height, const string& weight, string salary) {
	cout << "Name:\t" << name << endl
		 << "Age:\t" << *age << endl
		 << "Height:\t" << height << endl
		 << "Weight:\t" << weight << endl
		 << "Salary:\t" << salary << endl;
}

void ReadPersonData(string& name, unsigned short& age, double& salary) {
	name = ReadPersonName(); age = ReadPersonAge(); ReadPersonSalary(&salary);
}

void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight) {
	name = ReadPersonName(); age = ReadPersonAge(); ReadPersonHeight(); ReadPersonWeight(weight);
}


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