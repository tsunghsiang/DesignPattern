#ifndef GARAGE_DOOR_LIGHT_ON_COMMAND_HPP
#define GARAGE_DOOR_LIGHT_ON_COMMAND_HPP

#include <memory>
#include "Command.hpp"
#include "GarageDoor.hpp"

class GarageDoorLightOnCommand : public Command
{
    public:
        GarageDoorLightOnCommand(SPTR_GarageDoor garage_door_ptr);
        void execute();
        void undo();
    private:
        SPTR_GarageDoor m_garage_door_ptr;
};

using SPTR_GarageDoorLightOnCommand = std::shared_ptr<GarageDoorLightOnCommand>;

#endif
