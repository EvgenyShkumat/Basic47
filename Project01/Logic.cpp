void multiplication_table_init(int** matrix, int heigth, int length) {
	for (int i = 0; i < length; i++)
	{
		*(*(matrix) + i) = i + 1;
	}

	for (int i = 0; i < heigth; i++)
	{
		*(*(matrix + i)) = i + 1;
	}

	for (int i = 1; i < heigth; i++)
	{
		for (int j = 1; j < length; j++)
		{
			matrix[i][j] = matrix[i][0] * matrix[0][j];
		}
	}
}