#include "operator_factory.h"

operator_factory::operator_factory()
{
    map["+"] = new addition_operator();
    map["/"] = new division_operator();
    map["^"] = new exponentiation_operator();
    map["*"] = new multiplication_operator();
    map["-"] = new subtraction_operator();
}

operator_factory::~operator_factory()
{
    delete map["+"]; // addition
    delete map["/"]; // division
    delete map["^"]; // exponentiation
    delete map["*"]; // multiplication
    delete map["-"]; // subtraction
}

ioperator *operator_factory::parse(std::string op)
{
    if(map.count(op) == 0){
        throw operator_argument_exception("The given argument, \"" + op + "\", cannot be parsed into an operator.");
    }

    return map[op];
}
