#include "Exception.h"
Exception::Exception(string message) { this->message = message; };
string Exception::getMessage() { return message; };