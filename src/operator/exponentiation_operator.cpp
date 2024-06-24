#include "exponentiation_operator.h"

double exponentiation_operator::operate(std::vector<double> xi)
{
    if(xi.size() != noperands()){
        throw operator_argument_exception("Exponentiation operator was provided " + std::to_string(xi.size()) + " arguments when it requires exactly 2.");
    }

    

    // return xi[0] * xi[1];
}