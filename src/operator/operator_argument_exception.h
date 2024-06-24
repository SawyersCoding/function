#ifndef OPERATOR_ARGUMENT_EXCEPTION_H
#define OPERATOR_ARGUMENT_EXCEPTION_H

#include <exception>
#include <string>

class operator_argument_exception : public std::exception{

    private:
        std::string message;

    public:
        operator_argument_exception(std::string message = "");

    public:
        const char* what() const throw();

};

#endif // OPERATOR_ARGUMENT_EXCEPTION_H