#include "GarageDoorLightOffCommand.hpp"

GarageDoorLightOffCommand::GarageDoorLightOffCommand(SPTR_GarageDoor garage_door_ptr):m_garage_door_ptr(garage_door_ptr){}

void GarageDoorLightOffCommand::execute()
{
    m_garage_door_ptr->LightOff();
}

void GarageDoorLightOffCommand::undo()
{
    m_garage_door_ptr->LightOn();
}
