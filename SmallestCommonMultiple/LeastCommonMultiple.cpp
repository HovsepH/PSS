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
	int i;
	int firstNumber;
	int secondNumber;

	/*while (true) {

		cout << " a = "; cin >> firstNumber;
		cout << " b = "; cin >> secondNumber;
		cout << endl;

		if (firstNumber > secondNumber) {

			for (i = secondNumber; i <= firstNumber * secondNumber; i = i + secondNumber) {
				if (i % firstNumber == 0 && i % secondNumber == 0) {
					cout << "The number is = " << i << endl;
					break;
				}
			}
		}
		else {
			for (i = firstNumber; i <= firstNumber * secondNumber; i = i + firstNumber) {
				if (i % firstNumber == 0 && i % secondNumber == 0) {
					cout << "The number is = " << i << endl;
					break;
				}
			}
		}

	}*/

	cout << " a = "; cin >> firstNumber;
	cout << " b = "; cin >> secondNumber;
	cout << endl;


	int gcd;
	if (firstNumber > secondNumber)
		gcd = greatestCommonDiv(firstNumber, secondNumber);
	else
		gcd = greatestCommonDiv(secondNumber, firstNumber);

	int result = (firstNumber * secondNumber) / gcd;
	cout << "lcd: " << result << endl;

	return 0;
}