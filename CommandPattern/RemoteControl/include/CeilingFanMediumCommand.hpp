#ifndef CEILING_FAN_MEDIUM_COMMAND_HPP
#define CEILING_FAN_MEDIUM_COMMAND_HPP

#include "Command.hpp"
#include "CeilingFan.hpp"
#include <memory>

class CeilingFanMediumCommand : public Command
{
    public:
        CeilingFanMediumCommand(SPTR_CeilingFan ceiling_fan_ptr);
        void execute();
        void undo();
    private:
        SPTR_CeilingFan m_ceiling_fan_ptr;
        CeilingFan::State m_prev_speed;
};

using SPTR_CeilingFanMediumCommand = std::shared_ptr<CeilingFanMediumCommand>;

#endif
