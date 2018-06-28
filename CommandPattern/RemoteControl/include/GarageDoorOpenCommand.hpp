#ifndef GARAGE_DOOR_OPEN_COMMAND_HPP
#define GARAGE_DOOR_OPEN_COMMAND_HPP

#include <memory>
#include "Command.hpp"
#include "GarageDoor.hpp"

class GarageDoorOpenCommand : public Command
{
    public:
        GarageDoorOpenCommand(SPTR_GarageDoor garage_door_ptr);
        void execute();
        void undo();
    private:
        SPTR_GarageDoor m_garage_door_ptr;
};

using SPTR_GarageDoorOpenCommand = std::shared_ptr<GarageDoorOpenCommand>;

#endif
