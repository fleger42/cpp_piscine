#include <iostream>
#include "Base.hpp"

int main(void)
{
   Base test;
   Base *ret;
   ret = test.generate();
   test.identify(ret);
   test.identify(*ret);
}