#include "header.hpp"

__intptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<__intptr_t>(ptr));
}

Data* deserialize(__intptr_t raw)
{
     return(reinterpret_cast<Data*>(raw));
}