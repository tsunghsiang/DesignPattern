#include "GarageDoorCloseCommand.hpp"

GarageDoorCloseCommand::GarageDoorCloseCommand(SPTR_GarageDoor garage_door_ptr):m_garage_door_ptr(garage_door_ptr){}

void GarageDoorCloseCommand::execute()
{
    m_garage_door_ptr->Down();
}

void GarageDoorCloseCommand::undo()
{
    m_garage_door_ptr->Up();
}
