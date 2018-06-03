#ifndef GARAGE_DOOR_LIGHT_OFF_COMMAND_HPP
#define GARAGE_DOOR_LIGHT_OFF_COMMAND_HPP

#include <memory>
#include "Command.hpp"
#include "GarageDoor.hpp"

class GarageDoorLightOffCommand : public Command
{
    public:
        GarageDoorLightOffCommand(SPTR_GarageDoor garage_door_ptr);
        void execute();
    private:
        SPTR_GarageDoor m_garage_door_ptr;
};

using SPTR_GarageDoorLightOffCommand = std::shared_ptr<GarageDoorLightOffCommand>;

#endif
