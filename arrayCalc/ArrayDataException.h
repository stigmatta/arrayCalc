#pragma once
#include <iostream>
#include "Exception.h"
using namespace std;
class ArrayDataException:public Exception
{
public:
	ArrayDataException(string message);
	string getMessage();
};

