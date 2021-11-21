#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <iostream>
#include <iomanip>

typedef struct t_data
{
    std::string name;
}               Data;

__intptr_t serialize(Data* ptr);
Data* deserialize(__intptr_t raw);
#endif