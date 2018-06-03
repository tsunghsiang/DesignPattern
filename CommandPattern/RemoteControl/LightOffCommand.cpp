#include "LightOffCommand.hpp"

LightOffCommand::LightOffCommand(SPTR_Light light_ptr) : m_light_ptr(light_ptr){}

void LightOffCommand::execute()
{
    m_light_ptr->Off();
}
