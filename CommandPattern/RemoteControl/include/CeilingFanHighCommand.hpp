#ifndef CEILING_FAN_HIGH_COMMAND_HPP
#define CEILING_FAN_HIGH_COMMAND_HPP

#include "Command.hpp"
#include "CeilingFan.hpp"
#include <memory>

class CeilingFanHighCommand : public Command
{
    public:
        CeilingFanHighCommand(SPTR_CeilingFan ceiling_fan_ptr);
        void execute();
        void undo();
    private:
        SPTR_CeilingFan m_ceiling_fan_ptr;
        CeilingFan::State m_prev_speed;
};

using SPTR_CeilingFanHighCommand = std::shared_ptr<CeilingFanHighCommand>;

#endif
