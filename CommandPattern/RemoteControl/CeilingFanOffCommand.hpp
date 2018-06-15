#ifndef CEILING_FAN_OFF_COMMAND_HPP
#define CEILING_FAN_OFF_COMMAND_HPP

#include "Command.hpp"
#include "CeilingFan.hpp"
#include <memory>

class CeilingFanOffCommand : public Command
{
    public:
        CeilingFanOffCommand(SPTR_CeilingFan ceiling_fan_ptr);
        void execute();
        void undo();
    private:
        SPTR_CeilingFan m_ceiling_fan_ptr;
        CeilingFan::State m_prev_speed;
};

using SPTR_CeilingFanOffCommand = std::shared_ptr<CeilingFanOffCommand>;

#endif
