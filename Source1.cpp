


#include <iostream>

using namespace std;

int main()
{
	float A;
	float B;
	float X;

	cout << "This program was made to solve for X in the following equasion:" << endl;
	cout << "AX + B = 0" << endl;
	cout << " " << endl;

	cout << "Please enter a value for A: ";
	cin >> A;

	cout << "Please enter a value for B: ";
	cin >> B;
	cout << " " << endl;

	X = (-1 * B) / A;

	cout << "And X =" << X << endl;
}