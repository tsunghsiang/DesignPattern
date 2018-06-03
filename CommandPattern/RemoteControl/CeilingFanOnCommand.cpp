#include "CeilingFanOnCommand.hpp"

CeilingFanOnCommand::CeilingFanOnCommand(SPTR_CeilingFan ceiling_fan_ptr):m_ceiling_fan_ptr(ceiling_fan_ptr){}

void CeilingFanOnCommand::execute()
{
    m_ceiling_fan_ptr->On();
}
