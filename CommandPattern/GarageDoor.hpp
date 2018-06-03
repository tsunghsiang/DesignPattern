#ifndef GARAGE_DOOR_HPP
#define GARAGE_DOOR_HPP

#include <iostream>
#include <memory>

class GarageDoor
{
    public:
        GarageDoor();
        ~GarageDoor();
        void Up();
        void Down();
        void LightOn();
        void LightOff();
    private:
};

using SPTR_GarageDoor = std::shared_ptr<GarageDoor>;

#endif

