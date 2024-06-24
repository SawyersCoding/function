#ifndef FUNCTION_H
#define FUNCTION_H

#include "func_param.h"
#include "operator/operator_factory.h"
#include <stdexcept>
#include <string>
#include <vector>

class function{
    private:
        std::string infix;
        std::string name;
        std::string rpn;
        std::vector<func_param> constants;
        std::vector<func_param> variables;
        operator_factory op_factory;

    private:
       function(std::string infix, std::string rpn);

    public:
        double eval(std::vector<double> variable_values);
        inline func_param *get_constant(int i) { return &constants[i]; }
        inline std::string get_infix() { return infix; } 
        inline std::string get_name() { return name; }
        inline std::string get_rpn() { return rpn; }
        inline func_param *get_variable(int i) { return &variables[i]; }
        inline int nconstants() { return constants.size(); }
        inline int nvariables() { return variables.size(); }

    public:
        static function *try_parse_infix(std::string infix);
        static function *try_parse_rpn(std::string rpn);
};


#endif // FUNCTION_H