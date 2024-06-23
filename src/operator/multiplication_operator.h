#ifndef MULTIPLICATION_OPERATOR_H
#define MULTIPLICATION_OPERATOR_H

#include "ioperator.h"

class multiplication_operator : public ioperator {

    private:
        const std::string NAME = "multiplication";
        const bool IS_RIGHT_ASSOCIATIVE = false;
        const int PRECEDENCE = 3;
        const std::string SYMBOL = "*";

    public:
        inline std::string name() override { return NAME; }
        inline bool is_right_associative() override { return IS_RIGHT_ASSOCIATIVE; }
        double operate(std::vector<double> xi) override;
        inline int precedence() override { return PRECEDENCE; }
        inline std::string symbol() override { return SYMBOL; }

};

#endif // MULTIPLICATION_OPERATOR_H