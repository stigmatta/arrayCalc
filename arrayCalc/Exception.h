#pragma once
#include <iostream>
using namespace std;
class Exception
{
protected:
	string message;
public:
	Exception(string message);
	string getMessage();
};

