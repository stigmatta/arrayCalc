#pragma once
#include <iostream>
using namespace std;
class StringArray
{
	string** arr;
	int rows, cols;
	StringArray(int rows, int cols)
	{
		this->rows = rows;
		this->cols = cols;
		arr = new string * [rows];
		for (int i = 0; i < rows; i++)
			arr[i] = new string[cols];
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
				arr[i][j] = "0";
		}
	}
public:
	StringArray() = delete;
	static StringArray exceptionCheck(int rows, int cols);
	void init_zeros();
	~StringArray();
	string* operator [](int index);
};

