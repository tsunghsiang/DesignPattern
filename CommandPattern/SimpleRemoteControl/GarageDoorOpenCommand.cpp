#include "GarageDoorOpenCommand.hpp"

GarageDoorOpenCommand::GarageDoorOpenCommand(SPTR_GarageDoor garage_door_ptr):m_garage_door_ptr(garage_door_ptr){}

void GarageDoorOpenCommand::execute()
{
    m_garage_door_ptr->Up();
}
