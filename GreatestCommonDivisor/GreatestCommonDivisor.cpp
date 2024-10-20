#include <iostream>
using namespace std;

int greatestCommonDiv(int b, int a)
{
	int c = b % a;

	while (c != 0)
	{
		b = a;
		a = c;
		c = b % a;
	}

	return a;
}

int main()
{

	/*int i;
	int firstNumber;
	int secondNumber;

	while (true) {

		cout << "firstNumber = "; cin >> firstNumber;
		cout << "secondNumber = "; cin >> secondNumber;
		cout << endl;

		if (firstNumber > secondNumber) {

			for (i = secondNumber; i >= 1; i--) {
				if (firstNumber % i == 0 && secondNumber % i == 0) {
					cout << "The number is = " << i << endl << endl;
					break;
				}
			}
		}
		else {
			for (i = firstNumber; i >= 1; i--) {
				if (secondNumber % i == 0 && firstNumber % i == 0) {
					cout << "The number is = " << i << endl << endl;
					break;
				}
			}
		}

	}*/

	int firstNumber;
	int secondNumber;

	while (true)
	{
		cout << "firstNumber = "; cin >> firstNumber;
		cout << "secondNumber = "; cin >> secondNumber;
		int gcd;

		if (firstNumber > secondNumber)
			gcd = greatestCommonDiv(firstNumber, secondNumber);
		else
			gcd = greatestCommonDiv(secondNumber, firstNumber);

		cout << "gcd: " << gcd << endl;
		cout << endl;

	}
	return 0;
}

