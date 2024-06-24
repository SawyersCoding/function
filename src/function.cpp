#include "function.h"

function::function(std::string infix, std::string rpn)
{

}

double function::eval(std::vector<double> variable_values)
{
    return 0.0;
}

function *function::try_parse_infix(std::string infix)
{
    // Apply shunting yard algorithm here
    // Must understand what is constant and what is variable
    return nullptr;
}

function *function::try_parse_rpn(std::string rpn)
{
    return nullptr;
}
