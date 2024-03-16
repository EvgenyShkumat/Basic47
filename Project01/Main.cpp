#include <iostream>
using namespace std;

string convert_to_string(int** matrix, int length, int heigth);


int main() {
	int length = 10;
	int height = 8;

	int** matrix = new int*[height];

	for (int i = 0; i < height; i++)
	{
		*(matrix + i) = new int[length];
	}

	return 0;
}