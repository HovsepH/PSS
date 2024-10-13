#include <iostream>
using namespace std;

int main() 
{
	int i;
	int firstNumber;
	int secondNumber;

	while (true) {

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

	}

	return 0;
}