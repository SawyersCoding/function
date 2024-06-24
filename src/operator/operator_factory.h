#ifndef OPERATOR_FACTORY_H
#define OPERATOR_FACTORY_H

#include "addition_operator.h"
#include "division_operator.h"
#include "exponentiation_operator.h"
#include "ioperator.h"
#include "multiplication_operator.h"
#include "subtraction_operator.h"
#include <unordered_map>

class operator_factory{

    private:
        std::unordered_map<std::string, ioperator*> map;

    public:
        operator_factory();
        ~operator_factory();

    public:
        ioperator *parse(std::string op);

};

#endif // OPERATOR_FACTORY_H