#ifndef LIGHT_HPP
#define LIGHT_HPP

#include <iostream>
#include <memory>

class Light
{
    public:
        Light();
        ~Light();
        void On();
        void Off();
    private:
};

using SPTR_Light = std::shared_ptr<Light>;

#endif
