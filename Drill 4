#include <iostream>
#include "std_lib_facilities.h"

//1-5. feladat

int main()
{
	double a;
	double b;
	string small = "The smaller value is:";
	string large = "The larger value is:";

	while (cin >> a >> b) {
		double x = 0;
		if (a=='|',b == '|') {
			break;
		}
		else if (a < b) {
			cout << small << a << "\n" << large << b << "\n";
			x = b - a;
		}
		else if (a > b) {
			cout << small << b << "\n" << large << a << "\n";
			x = a - b;
		}
		if (x == 0) {
			cout << "The numbers are equal.\n";
		}
		else if (x<=0.01){
			cout << "The numbers are almost equal.\n";
		}
	}
	return 0;
}

//6. feladat

int main()
{
	double a = 0;
	bool x = true;
	double small;
	double large;

	while (cin >> a)
	{
		cout << a << "\n";
		if (a == '|') {
			break;
		}
		if (x) {
			small = a;
			large = a;
			x = false;
		}
		else if (a < small)
		{
			small = a;
			cout << "the smallest so far" << "\n";
		}
		else if (a > large)
		{
			large = a;
			cout << "the largest so far" << "\n";
		}

	}
	return 0;
}

//7-11. feladat

int main()
{
	double a = 0;
	string unit;
	double sum = 0;
	double count = 0;
	vector <double> v;

	cout << "Give me a number and a unit \n";

	while (cin >> a >> unit)
	{
		if (a == '|') {
			break;
		}
		if (unit == "cm") {
			a = a / 100;
			sum = sum + a;
			count++;
		}
		else if (unit == "m") {
			a = a;
			sum = sum + a;
			count++;
		}
		else if (unit == "in") {
			a = a / 100 * 2.54;
			sum = sum + a;
			count++;
		}
		else if (unit == "ft") {
			a = a / 100 * 2.54 * 12;
			sum = sum + a;
			count++;
		}
		else { cout << "illegal or wrong unite\n"; }

		v.push_back(a);

		cout << "Sum: " << sum << '\n';
		cout << "Pices: " << count << '\n';

		sort(v.begin(), v.end());
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
	}
	return 0;
}
