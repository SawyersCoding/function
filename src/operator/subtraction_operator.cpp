#include "subtraction_operator.h"

double subtraction_operator::operate(std::vector<double> xi)
{
    if(xi.size() != noperands()){
        throw operator_argument_exception("Subtraction operator was provided " + std::to_string(xi.size()) + " arguments when it requires exactly 2.");
    }
    return xi[0] - xi[1];
}