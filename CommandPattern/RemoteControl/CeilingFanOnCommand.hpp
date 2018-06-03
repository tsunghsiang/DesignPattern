#ifndef CEILING_FAN_ON_COMMAND_HPP
#define CEILING_FAN_ON_COMMAND_HPP

#include "Command.hpp"
#include "CeilingFan.hpp"
#include <memory>

class CeilingFanOnCommand : public Command
{
    public:
        CeilingFanOnCommand(SPTR_CeilingFan ceiling_fan_ptr);
        void execute();
    private:
        SPTR_CeilingFan m_ceiling_fan_ptr;
};

using SPTR_CeilingFanOnCommand = std::shared_ptr<CeilingFanOnCommand>;

#endif
