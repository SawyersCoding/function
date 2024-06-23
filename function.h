#ifndef FUNCTION_H
#define FUNCTION_H

#include <string>
#include <stdexcept>

class function{
    private:
        std::string name;
        std::string infix;

    private:
       function(std::string infix);

    public:
        inline std::string get_name() { return name; }
        inline std::string get_infix() { return infix; } 

    public:
        static function *try_parse(std::string infix);
};


#endif // FUNCTION_H