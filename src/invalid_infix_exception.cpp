#include "invalid_infix_exception.h"

invalid_infix_exception::invalid_infix_exception(std::string message) : message(message) { }

const char *invalid_infix_exception::what() const throw() { return message.c_str(); }
