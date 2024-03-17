#include <iostream>
using namespace std;

string convert_to_string(int** matrix, int length, int heigth);
void random_init(int** matrix, int heigth, int length, int min, int max);

void multiplication_table_init(int** matrix, int heigth, int length);
bool is_same_element(int** matrix, int heigth, int length);
int find_max_sum_row(int** matrix, int length, int heigth);

int main() {
	srand(time(NULL));

	int length = 5;
	int heigth = 5;

	int** matrix = new int*[heigth];

	for (int i = 0; i < heigth; i++)
	{
		*(matrix + i) = new int[length];
	}
	
	random_init(matrix, heigth, length, 0, 9);

	cout << convert_to_string(matrix, length, heigth);
	cout << "The index of row that has max sum is: " << find_max_sum_row(matrix, heigth, length);

	for (int i = 0; i < length; i++)
	{
		delete[]*(matrix + i);
	}

	delete[] matrix;

	return 0;
}