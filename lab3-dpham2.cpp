// lab3-dpham2.cpp
// Duyen Pham
// COSC 2030 - 01
// Lab03
// Oct. 8, 2018

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int short sum = 0;
	int short n;

	int long new_sum = 0;
	int long new_n;

	float product = 1.0;
	long integer;

	double new_product = 1.0;

	float strange_ratio = 0.0;
	float strange_sum = 0.0;
	float strange_n;

	double new_strange_ratio = 0.0;
	double new_strange_sum = 0.0;
	double new_strange_n;

	cout << "Please insert an integer: ";
	cin >> n;

	cout << "Please insert another integer: ";
	cin >> new_n;

	cout << "Please insert an integer for computing factorial: ";
	cin >> integer;

	cout << "Please insert an integer for computing the strange sum of integers: ";
	cin >> strange_n;

	for (int i = 0; i <= n; i++)
		sum = sum + i;

	for (int i = 0; i <= new_n; i++)
		new_sum = new_sum + i;

	for (int i = 1; i <= integer; i++)
		product = product * i;

	for (int i = 1; i <= integer; i++)
		new_product = new_product * i;

	for (int i = 1; i <= strange_n; i++)
		strange_ratio = strange_ratio + (1 / (strange_n));

	strange_sum = strange_ratio - 1.0;


	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	cout << "The sum of consecutive integers 1 through " << n << " is " << sum << endl << endl;
	cout << "The sum of the new type of integers 1 through " << new_n << " is " << new_sum << endl << endl;
	cout << "The factorial of integers from 1 through " << integer << " is " << product << endl << endl;
	cout << "The new factorial of integeres from 1 through " << integer << " is " << new_product << endl << endl;
	cout << "The strange sum from 1 through " << strange_n << " is " << strange_sum << endl << endl;

	return 0;
}


