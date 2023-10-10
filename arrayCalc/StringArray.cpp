#include "StringArray.h"
#include "ArraySizeException.h"
string* StringArray:: operator [](int index)
{
	if (index >= 0 && index <= 3)
		return arr[index];
}
StringArray StringArray::exceptionCheck(int rows, int cols)
{
	if (rows == 4 && cols == 4)
		return StringArray(rows,cols);
	else
		throw ArraySizeException("Invalid array size");
}
void StringArray::init_zeros()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			arr[i][j] = "a";
	}
}
StringArray::~StringArray()
{
	for (int i = 0; i < 4; i++)
		delete[]arr[i];
	delete[]arr;
}