#include "division_operator.h"

double division_operator::operate(std::vector<double> xi)
{
    if(xi.size() != noperands()){
        throw operator_argument_exception("Division operator was provided " + std::to_string(xi.size()) + " arguments when it requires exactly 2.");
    }

    if(xi[1] == 0){
        throw operator_argument_exception("Trying to divide by 0: " + std::to_string(xi[0]) + "/" + std::to_string(xi[1]) + ".");
    }
    return xi[0] / xi[1];
}