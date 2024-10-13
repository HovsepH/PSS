#include <iostream>
using namespace std;

int main()
{

	int i;
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

	}

	return 0;
}