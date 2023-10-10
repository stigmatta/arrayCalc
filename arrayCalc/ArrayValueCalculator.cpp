#include "ArrayValueCalculator.h"
#include "ArraySizeException.h"
#include "ArrayDataException.h"
#include <string>
#include <iostream>
using namespace std;
int ArrayValueCalculator::doCalc(StringArray& arr)
{
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] >= "0" && arr[i][j] <= "9")
				sum += stoi(arr[i][j]);
			else
				throw ArrayDataException("Cannot convert element at position [" + to_string(i) + "][" + to_string(j) + "]");
		}
	}
	return sum;
}
