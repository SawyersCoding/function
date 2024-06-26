#include "function.h"

function::function(std::string infix, std::string rpn, std::string name, std::vector<func_param> variables, std::vector<func_param> constants) : infix(infix), rpn(rpn), name(name), variables(variables), constants(constants) { }

double function::eval(std::vector<double> variable_values)
{
    return 0.0;
}

function *function::try_parse_infix(std::string name, std::vector<std::string> variables, std::string infix)
{
    // This is a crude implementation.
    // Skipping integrity checks for now
    std::string rpn, token;
    func_param fp;
    operator_factory op_factory;
    ioperator *op;
    std::stack<ioperator *> op_buf;
    std::vector<func_param> fconstants, fvariables;
    std::unordered_set<std::string> params_found;
    std::stringstream ss(infix);

    rpn = "";

    // Save variables
    for(std::string var : variables){
        fp.name = fp.symbol = var;
        fvariables.push_back(fp);
        params_found.emplace(var);
    }
    
    // Input format currently:
    // func_name x_0 x_1 = a * x_0 ^ 2 + b * x_1 + c

    // ------ Apply shunting yard algorithm here ------ //
    while(!ss.eof()){
        std::getline(ss, token, ' ');

        // is a known operator
        if(op_factory.is_operator(token)){
            op = op_factory.parse(token);
            while(!op_buf.empty() 
                  && (op_buf.top()->precedence() > op->precedence() 
                  || (op_buf.top()->precedence() == op->precedence() && !op->is_right_associative()))){
                rpn += op_buf.top()->symbol() + " ";
                op_buf.pop();
            } 
            op_buf.push(op);
        }
        // is a parameter
        else{
            // Save constants
            if(params_found.count(token) != 0){
                fp.name = fp.symbol = token;
                params_found.emplace(token);
                fconstants.push_back(fp);
            }

            // push to output
            rpn += token + " ";
        }
    }

    while(!op_buf.empty()){
        rpn += op_buf.top()->symbol() + " ";
        op_buf.pop();
    }

    return new function(infix, rpn, name, fvariables, fconstants);
}

// function *function::try_parse_rpn(std::string rpn)
// {
//     return nullptr;
// }
