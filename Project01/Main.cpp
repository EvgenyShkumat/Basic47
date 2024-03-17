#include <iostream>
using namespace std;

string convert_to_string(int** matrix, int length, int heigth);
void random_init(int** matrix, int heigth, int length, int min, int max);

void multiplication_table_init(int** matrix, int heigth, int length);
bool is_same_element(int** matrix, int heigth, int length);

int main() {
	srand(time(NULL));

	int length = 100;
	int heigth = 100;

	int** matrix = new int*[heigth];

	for (int i = 0; i < heigth; i++)
	{
		*(matrix + i) = new int[length];
	}
	
	random_init(matrix, heigth, length, 0, 1000);

	cout << convert_to_string(matrix, length, heigth);
	cout << (is_same_element(matrix, heigth, length) ? "There are same elemets" : "there is no same elements");

	return 0;
}