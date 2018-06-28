#ifndef GARAGE_DOOR_CLOSE_COMMAND_HPP
#define GARAGE_DOOR_CLOSE_COMMAND_HPP

#include <memory>
#include "Command.hpp"
#include "GarageDoor.hpp"

class GarageDoorCloseCommand : public Command
{
    public:
        GarageDoorCloseCommand(SPTR_GarageDoor garage_door_ptr);
        void execute();
        void undo();
    private:
        SPTR_GarageDoor m_garage_door_ptr;
};

using SPTR_GarageDoorCloseCommand = std::shared_ptr<GarageDoorCloseCommand>;

#endif
