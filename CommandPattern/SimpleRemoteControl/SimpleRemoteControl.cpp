#include "SimpleRemoteControl.hpp"

SimpleRemoteControl::SimpleRemoteControl(){}

void SimpleRemoteControl::SetCommand(SPTR_Command cmd)
{
    m_cmd = cmd;
}

void SimpleRemoteControl::PressButton()
{
    if(m_cmd)               // Check if NULL
        m_cmd->execute();
}
