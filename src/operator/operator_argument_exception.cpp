#include "operator_argument_exception.h"

operator_argument_exception::operator_argument_exception(std::string message) : message(message) { }

const char *operator_argument_exception::what() const throw() { return message.c_str(); }
