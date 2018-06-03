#ifndef LIGHT_HPP
#define LIGHT_HPP

#include <iostream>
#include <memory>
#include <string>

class Light
{
    public:
        Light(std::string location = "");
        ~Light();
        void On();
        void Off();
    private:
        std::string m_location;
};

using SPTR_Light = std::shared_ptr<Light>;

#endif
