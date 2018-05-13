#include "ChocolateBoiler.hpp"
#include <iostream>

int main(int argc, char * argv[])
{
    ChocolateBoiler& cb = ChocolateBoiler::getInstance();
    cb.destroy(); 
    return 0;
}
