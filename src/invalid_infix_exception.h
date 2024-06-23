#ifndef INVALID_INFIX_EXCEPTION_H
#define INVALID_INFIX_EXCEPTION_H

#include <exception>
#include <string>

class invalid_infix_exception : public std::exception{

    private:
        std::string message;

    public:
        invalid_infix_exception(std::string message = "");

    public:
        const char* what() const throw();

};

#endif // INVALID_INFIX_EXCEPTION_H