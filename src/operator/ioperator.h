#ifndef IOPERATOR_H
#define IOPERATOR_H

#include "operator_argument_exception.h"
#include <string>
#include <vector>

class ioperator{

    public:
        virtual std::string name() = 0;
        virtual bool is_right_associative() = 0;
        virtual int noperands() = 0;
        virtual double operate(std::vector<double> xi) = 0;
        virtual int precedence() = 0;
        virtual std::string symbol() = 0;

};

#endif // IOPERATOR_H