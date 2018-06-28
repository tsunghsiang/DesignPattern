#include "LightOnCommand.hpp"

LightOnCommand::LightOnCommand(SPTR_Light light_ptr) : m_light_ptr(light_ptr){}

void LightOnCommand::execute()
{
    m_light_ptr->On();
}

void LightOnCommand::undo()
{
    m_light_ptr->Off();
}
