#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Matrix {
private:
	vector<vector<int>> matrix;

	void populateWithRandomValues(int size) {
		matrix.resize(size, vector<int>(size));
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				matrix[i][j] = rand() % 10;
			}
		}
	}

public:
	Matrix(int size) {
		populateWithRandomValues(size);
	}

	void rotateClockwise() {
		int n = matrix.size();

		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				swap(matrix[i][j], matrix[j][i]);
			}
		}

		for (int i = 0; i < n; i++) {
			reverse(matrix[i].begin(), matrix[i].end());
		}
	}

	void displayMatrix() const {
		cout << endl;
		for (const auto& row : matrix) {
			for (int num : row) {
				cout << num << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
};

int main() {
	srand(static_cast<unsigned int>(time(0)));

	int size = 5;
	Matrix matrix(size);

	cout << "Original Matrix:";
	matrix.displayMatrix();

	matrix.rotateClockwise();

	cout << "Rotated Matrix:";
	matrix.displayMatrix();

	return 0;
}
