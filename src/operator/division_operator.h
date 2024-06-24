#ifndef DIVISION_OPERATOR_H
#define DIVISION_OPERATOR_H

#include "ioperator.h"

class division_operator : public ioperator {

    private:
        const std::string NAME = "division";
        const bool IS_RIGHT_ASSOCIATIVE = false;
        const int NOPERANDS = 2;
        const int PRECEDENCE = 3;
        const std::string SYMBOL = "/";

    public:
        inline std::string name() override { return NAME; }
        inline bool is_right_associative() override { return IS_RIGHT_ASSOCIATIVE; }
        inline int noperands() override { return NOPERANDS; }
        double operate(std::vector<double> xi) override;
        inline int precedence() override { return PRECEDENCE; }
        inline std::string symbol() override { return SYMBOL; }

};

#endif // DIVISION_OPERATOR_H