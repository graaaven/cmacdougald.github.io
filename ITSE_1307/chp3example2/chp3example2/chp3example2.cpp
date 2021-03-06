// chp3example2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double dblAlpha = 4.0;
	double dblBravo = 5.0;
	double dblCharlie = sqrt(pow(dblAlpha, 2) + pow(dblBravo, 2));

	cout << scientific;
	cout << dblAlpha << " " << dblBravo << " " << dblCharlie << endl;
	cout << fixed;
	cout << dblAlpha << " " << dblBravo << " " << dblCharlie << endl;
	cout << fixed << showpoint;
	cout << dblAlpha << " " << dblBravo << " " << dblCharlie << endl;
	cout << setprecision(2);
	cout << dblAlpha << " " << dblBravo << " " << dblCharlie << endl;
	cout << setprecision(4);
	cout << dblAlpha << " " 
		<< setprecision(2) << dblBravo << " " 
		<< setprecision(4) << dblCharlie << endl;
	cout << fixed;
	cout << setw(10) << dblAlpha
		<< setw(10) << dblBravo 
		<< setw(10) << dblCharlie << endl;
	cout << setw(4) << dblAlpha
		<< setw(4) << dblBravo
		<< setw(4) << dblCharlie << endl;
	cout << fixed << setfill('#');
	cout << setw(10) << dblAlpha
		<< setw(10) << dblBravo
		<< setw(10) << dblCharlie << endl;
	cout << fixed << setfill(' ');
	cout << setw(10) << left << dblAlpha
		<< setw(10) << dblBravo
		<< setw(10) << dblCharlie << endl;
	cout << fixed << setfill('.');
	cout << setw(10) << left << dblAlpha
		<< setw(10) << dblBravo
		<< setw(10) << dblCharlie << endl;
	cout << setw(10) << left << dblAlpha
		<< setw(10) << right << dblBravo
		<< setw(10) << left << dblCharlie << endl;
    return 0;

}

