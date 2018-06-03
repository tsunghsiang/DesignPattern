#include "CeilingFanOffCommand.hpp"

CeilingFanOffCommand::CeilingFanOffCommand(SPTR_CeilingFan ceiling_fan_ptr):m_ceiling_fan_ptr(ceiling_fan_ptr){}

void CeilingFanOffCommand::execute()
{
    m_ceiling_fan_ptr->Off();
}
