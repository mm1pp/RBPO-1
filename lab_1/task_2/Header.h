#pragma once
#include <iostream>
#include <string>

extern unsigned short height;
using namespace std;

unsigned short ReadPersonAge(void);

string ReadPersonName(void);

void ReadPersonHeight(void);

void ReadPersonWeight(unsigned short& weight);

void ReadPersonSalary(double* salary);

void WritePersonData(const string&, const unsigned short*, const string&, const string&, string);

void ReadPersonData(string& name, unsigned short& age, double& salary);

void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight);
