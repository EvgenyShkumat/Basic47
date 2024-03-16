#include <iostream>
using namespace std;

string convert_to_string(int** matrix, int length, int heigth);

void multiplication_table_init(int** matrix, int heigth, int length);

int main() {
	int length = 10;
	int heigth = 8;

	int** matrix = new int*[heigth];

	for (int i = 0; i < heigth; i++)
	{
		*(matrix + i) = new int[length];
	}
	
	multiplication_table_init(matrix, heigth, length);

	cout << convert_to_string(matrix, length, heigth);

	return 0;
}