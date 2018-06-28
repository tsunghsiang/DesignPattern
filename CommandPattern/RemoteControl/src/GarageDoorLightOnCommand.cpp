#include "GarageDoorLightOnCommand.hpp"

GarageDoorLightOnCommand::GarageDoorLightOnCommand(SPTR_GarageDoor garage_door_ptr):m_garage_door_ptr(garage_door_ptr){}

void GarageDoorLightOnCommand::execute()
{
    m_garage_door_ptr->LightOn();
}

void GarageDoorLightOnCommand::undo()
{
    m_garage_door_ptr->LightOff();
}
