#include "header.hpp"

int main(void)
{
    Data *data = new Data;
    Data *new_data;
    __intptr_t ret;

    data->name = "Florian";
    ret = serialize(data);
    new_data = deserialize(ret);
    std::cout << "old adresse = " << data << " new adresse = " << new_data << std::endl;
    std::cout << "old name = " << data->name << " new name = " << new_data->name << std::endl;
}