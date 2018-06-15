#ifndef REMOTE_CONTROL_HPP
#define REMOTE_CONTROL_HPP

#include "Command.hpp"
#include <iostream>

#define SLOT_NUM 8

class RemoteControl
{
    public:
        RemoteControl();
        ~RemoteControl();
        void SetCommand(int slot_idx, SPTR_Command on_cmd, SPTR_Command off_cmd);
        void OnButtonPushed(int slot_idx);
        void OffButtonPushed(int slot_idx);
    private:
        SPTR_Command m_on_cmds[SLOT_NUM];
        SPTR_Command m_off_cmds[SLOT_NUM];
};

#endif
