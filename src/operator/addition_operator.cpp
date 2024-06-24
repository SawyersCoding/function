#include "addition_operator.h"

double addition_operator::operate(std::vector<double> xi)
{
    if(xi.size() != noperands()){
        throw operator_argument_exception("Addition operator was provided " + std::to_string(xi.size()) + " arguments when it requires exactly 2.");
    }
    return xi[0] + xi[1];
}