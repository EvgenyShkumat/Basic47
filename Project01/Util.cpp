#include <iostream>
#include <string>

using namespace std;

string convert_to_string(int** matrix, int length, int heigth) {
	string msg = "";

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < heigth; j++)
		{
			msg += to_string(*(*(matrix + i) + j)) + " ";
		}
		msg += "\n";
	}

	return msg;
}