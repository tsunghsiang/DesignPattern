#ifndef LIGHT_ON_COMMAND_HPP
#define LIGHT_ON_COMMAND_HPP

#include "Command.hpp"
#include "Light.hpp"

#include <memory>

class LightOnCommand : public Command
{
    public:
        LightOnCommand(SPTR_Light light_ptr);
        void execute();
        void undo();
    private:
        SPTR_Light m_light_ptr;
}; 

using SPTR_LightOnCommand = std::shared_ptr<LightOnCommand>;

#endif
