#include "CeilingFanHighCommand.hpp"

CeilingFanHighCommand::CeilingFanHighCommand(SPTR_CeilingFan ceiling_fan_ptr):m_ceiling_fan_ptr(ceiling_fan_ptr){}

void CeilingFanHighCommand::execute()
{
    m_prev_speed = m_ceiling_fan_ptr->GetSpeed();
    m_ceiling_fan_ptr->High();
}

void CeilingFanHighCommand::undo()
{
    switch(m_prev_speed)
    {
        case CeilingFan::State::HIGH:
            m_ceiling_fan_ptr->High();
            break;
        case CeilingFan::State::MEDIUM:
            m_ceiling_fan_ptr->Medium();
            break;
        case CeilingFan::State::LOW:
            m_ceiling_fan_ptr->Low();
            break;
        case CeilingFan::State::OFF:
            m_ceiling_fan_ptr->Off();
            break;
        default:
            break;
    }
}
