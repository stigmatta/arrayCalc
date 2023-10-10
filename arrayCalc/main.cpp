#include "ArrayValueCalculator.h"
#include "ArraySizeException.h"
#include "ArrayDataException.h"
#include <iostream>
#include "StringArray.h"
using namespace std;
int main()
{
	ArrayValueCalculator calc;
	try
	{
		StringArray arr = StringArray::exceptionCheck(4, 4);
		arr.init_zeros();
		ArrayValueCalculator calc;
		cout << calc.doCalc(arr);
	}
	catch (ArraySizeException size_exception)
	{
		cout << size_exception.getMessage();
	}
	catch (ArrayDataException data_exception)
	{
		cout <<data_exception.getMessage();
	}
}