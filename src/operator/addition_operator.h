#ifndef ADDITION_OPERATOR_H
#define ADDITION_OPERATOR_H

#include "ioperator.h"

class addition_operator : public ioperator {

    private:
        const std::string NAME = "addition";
        const bool IS_RIGHT_ASSOCIATIVE = false;
        const int NOPERANDS = 2;
        const int PRECEDENCE = 2;
        const std::string SYMBOL = "+";

    public:
        inline std::string name() override { return NAME; }
        inline bool is_right_associative() override { return IS_RIGHT_ASSOCIATIVE; }
        inline int noperands() override { return NOPERANDS; }
        double operate(std::vector<double> xi) override;
        inline int precedence() override { return PRECEDENCE; }
        inline std::string symbol() override { return SYMBOL; }

};

#endif // ADDITION_OPERATOR_H