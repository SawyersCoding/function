#ifndef FUNCTION_H
#define FUNCTION_H

#include <string>
#include <stdexcept>

class function{
    private:
        std::string infix;
        std::string name;

    private:
       function(std::string infix);

    public:
        inline std::string get_infix() { return infix; } 
        inline std::string get_name() { return name; }

    public:
        static function *try_parse_infix(std::string infix);
};


#endif // FUNCTION_H