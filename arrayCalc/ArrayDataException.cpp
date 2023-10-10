#include "ArrayDataException.h"
ArrayDataException::ArrayDataException(string message) :Exception(message) {};
string ArrayDataException::getMessage() { return message; };