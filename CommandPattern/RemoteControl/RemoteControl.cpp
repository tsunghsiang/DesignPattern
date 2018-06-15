#include "RemoteControl.hpp"

RemoteControl::RemoteControl(){}

RemoteControl::~RemoteControl(){}

void RemoteControl::SetCommand(int slot_idx, SPTR_Command on_cmd, SPTR_Command off_cmd)
{
    if(slot_idx < 0 || slot_idx >= SLOT_NUM)
    {
        std::cout << "[RemoteControl::SetCommand] Slot Index Out of Range" << std::endl;
        return;
    }

    m_on_cmds[slot_idx] = on_cmd;
    m_off_cmds[slot_idx] = off_cmd; 
}

void RemoteControl::OnButtonPushed(int slot_idx)
{
    if(slot_idx < 0 || slot_idx >= SLOT_NUM)
    {
        std::cout << "[RemoteControl::OnButtonPushed] Slot Index Out of Range" << std::endl;
        return;
    }
    
    if(m_on_cmds[slot_idx] != NULL)
    {
        m_on_cmds[slot_idx]->execute();
        m_undo_cmd = m_on_cmds[slot_idx];
    }
}

void RemoteControl::OffButtonPushed(int slot_idx)
{
    if(slot_idx < 0 || slot_idx >= SLOT_NUM)
    {
        std::cout << "[RemoteControl::OffButtonPushed] Slot Index Out of Range" << std::endl;
        return;
    }
    
    if(m_off_cmds[slot_idx] != NULL)
    {
        m_off_cmds[slot_idx]->execute();
        m_undo_cmd = m_off_cmds[slot_idx];
    }
}

void RemoteControl::UndoButtonPushed()
{
    if(m_undo_cmd != NULL)
        m_undo_cmd->undo();
}
