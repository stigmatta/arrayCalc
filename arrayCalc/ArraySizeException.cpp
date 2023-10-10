#include "ArraySizeException.h"
ArraySizeException::ArraySizeException(string message) :Exception(message) {};
string ArraySizeException::getMessage() { return message; };