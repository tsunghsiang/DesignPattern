#ifndef CEILING_FAN_LOW_COMMAND_HPP
#define CEILING_FAN_LOW_COMMAND_HPP

#include "Command.hpp"
#include "CeilingFan.hpp"
#include <memory>

class CeilingFanLowCommand : public Command
{
    public:
        CeilingFanLowCommand(SPTR_CeilingFan ceiling_fan_ptr);
        void execute();
        void undo();
    private:
        SPTR_CeilingFan m_ceiling_fan_ptr;
        CeilingFan::State m_prev_speed;
};

using SPTR_CeilingFanLowCommand = std::shared_ptr<CeilingFanLowCommand>;

#endif
