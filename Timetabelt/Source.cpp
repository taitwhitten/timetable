/*
	Tait Whitten
	C++ Fall 2019
	Due: 12 September 2019
	Lab 2: Exploring Outcome
	Create a program that outputs my class schedule for one week
*/

#include <iostream>

using namespace std;


int main() {

	// variable declaration
	const string MO = "Monday		";	// declaring abbriviations to correspond to days of the week
	const string TU = "Tuesday		";
	const string WE = "Wednesday	";
	const string TH = "Thursday	";
	const string FR = "Friday		";
	const string CA = "8:00	Calculus 210";	// declaring abbriviations to correspond to classes and their starting times
	const string JA = "11:30	Understandcultrs: Modern Japan 165";
	const string CP = "12:40	C++ 162";
	const string EN = "11:30	Engineering Problems 180";
	const string CL = "1:50	Classical Physics 212";
	const string SP = "";

	// function call
	cout << MO << CA << endl;	// output is day then class and time
	cout << MO << JA << endl;
	cout << MO << CP << endl;
	cout << MO << CL << endl;
	cout << SP << endl;
	cout << TU << CA << endl;
	cout << TU << EN << endl;
	cout << TU << CP << endl;
	cout << TU << CL << endl;
	cout << SP << endl;
	cout << WE << CA << endl;
	cout << WE << JA << endl;
	cout << WE << CP << endl;
	cout << WE << CL << endl;
	cout << SP << endl;
	cout << TH << CA << endl;
	cout << TH << EN << endl;
	cout << TH << CP << endl;
	cout << TH << CL << endl;
	cout << SP << endl;
	cout << FR << JA << endl;
	cout << FR << CL << endl;

	return 0;
}
