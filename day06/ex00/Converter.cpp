#include "Converter.hpp"

Converter::Converter(std::string str) : int_ret(0), float_ret(0.0f), double_ret(std::strtod(str.c_str(), NULL)), char_ret(0),
                                        positive_inf(0), negative_inf(0), nan(0)
{
    isInf(str);
    isNan(str);
	int_ret = static_cast<int>(double_ret);
    float_ret = static_cast<float>(double_ret);
    char_ret = static_cast<char>(double_ret);
    return ;    
}

void Converter::isInf(std::string str)
{
	std::string temp;

	if(str.size() != 3)
    	temp = &str[1];
	else
		temp = str;
    if((str.find("inf") == 0 || (str.find("inf") == 1 && (str[0] == '-' || str[0] == '+'))) ||
		(str.find("inff") == 0 || (str.find("inff") == 1 && (str[0] == '-' || str[0] == '+'))))
    {   
        if(str[0] == '-')
            this->negative_inf = 1;
        else
            this->positive_inf = 1;
    }
}

void Converter::isNan(std::string str)
{
    if(str.find("nan") == 0 || str.find("nanf") == 0)
        this->nan = 1;
}

Converter & Converter::operator=(Converter const & target)
{
	this->int_ret = target.int_ret;
	this->float_ret = target.float_ret;
	this->double_ret = target.double_ret;
	this->char_ret = target.char_ret;
	this->positive_inf = target.positive_inf;
	this->negative_inf = target.negative_inf;
	this->nan = target.nan;
	return (*this);
}

Converter::~Converter(void)
{
    return ;    
}

Converter::Converter(void) : int_ret(0), float_ret(0.0f), double_ret(0.0), char_ret(0), positive_inf(0), negative_inf(0), nan(0)
{
    return ;  
}

Converter::Converter(Converter const & copy)
{
    *this = copy;
    return ;  
}

float Converter::getFloat(void) const
{
    return (float_ret);
}

char Converter::getChar(void) const
{
    return (char_ret);
}

int Converter::getInt(void) const
{
    return (int_ret);
}

double Converter::getDouble(void) const
{
    return (double_ret);
}

void Converter::printFloat(std::ostream & os) const
{
    if(nan)
        os << "nanf";
    else if(positive_inf)
        os << "+inff";
    else if(negative_inf)
        os << "-inff";
    else
        os << std::fixed << std::setprecision(1) << getFloat() << "f";
    return ;
}

void Converter::printDouble(std::ostream & os) const
{
    if(nan)
        os << "nan";
    else if(positive_inf)
        os << "+inf";
    else if(negative_inf)
        os << "-inf";
    else
        os << std::fixed << std::setprecision(1) << getDouble();
    return ;
}

void Converter::printChar(std::ostream & os) const
{
    if(nan)
        os << "impossible";
    else if(positive_inf)
        os << "impossible";
    else if(negative_inf)
        os << "impossible";
    else if(char_ret >= 33 && char_ret <= 126)
        os << getChar();
    else
        os << "Non displayable";
    return ;
}

void Converter::printInt(std::ostream & os) const
{
    if(nan)
        os << "impossible";
    else if(positive_inf)
        os << "impossible";
    else if(negative_inf)
        os << "impossible";
    else
        os << getInt();
    return ;
}

std::ostream & operator<<(std::ostream & os, Converter const & to_print)
{
    os << "char: ";
    to_print.printChar(os);
    os << std::endl;
    os << "int: ";
    to_print.printInt(os);
    os << std::endl;
    os << "float: ";
    to_print.printFloat(os);
    os << std::endl;
    os << "double: ";
    to_print.printDouble(os);
    return (os);
}