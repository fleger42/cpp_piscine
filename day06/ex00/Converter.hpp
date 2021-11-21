#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <iostream>
#include <iomanip>
#include <cstdlib>
class Converter
{
    public:
        Converter(void);
        Converter(Converter const & copy);
        ~Converter(void);
        Converter(std::string str);
        Converter & operator=(Converter const & target);
        float getFloat(void) const;
        double getDouble(void) const;
        char getChar(void) const;
        int getInt(void) const;
        void printFloat(std::ostream & os) const;
        void printDouble(std::ostream & os) const;
        void printChar(std::ostream & os) const;
        void printInt(std::ostream & os) const;
        void isInf(std::string str);
        void isNan(std::string str);
    private:
        int int_ret;
        float float_ret;
        double double_ret;
        char char_ret;
        bool positive_inf;
        bool negative_inf;
        bool nan;
};
std::ostream & operator<<(std::ostream & os, Converter const & to_print);
#endif
