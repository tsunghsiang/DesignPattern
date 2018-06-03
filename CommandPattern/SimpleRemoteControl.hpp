#ifndef SIMPLE_REMOTE_CONTROL_HPP
#define SIMPLE_REMOTE_CONTROL_HPP

#include "Command.hpp"

class SimpleRemoteControl
{
    public:
        SimpleRemoteControl();
        void SetCommand(SPTR_Command cmd);
        void PressButton();
    private:
        SPTR_Command m_cmd;
};

#endif
