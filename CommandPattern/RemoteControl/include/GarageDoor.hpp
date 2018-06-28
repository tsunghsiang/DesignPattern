#ifndef GARAGE_DOOR_HPP
#define GARAGE_DOOR_HPP

#include <iostream>
#include <memory>
#include <string>

class GarageDoor
{
    public:
        GarageDoor(std::string location = "");
        ~GarageDoor();
        void Up();
        void Down();
        void LightOn();
        void LightOff();
    private:
        std::string m_location;
};

using SPTR_GarageDoor = std::shared_ptr<GarageDoor>;

#endif

