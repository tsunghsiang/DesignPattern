#ifndef LIGHT_OFF_COMMAND_HPP
#define LIGHT_OFF_COMMAND_HPP

#include "Command.hpp"
#include "Light.hpp"

#include <memory>

class LightOffCommand : public Command
{
    public:
        LightOffCommand(SPTR_Light light_ptr);
        void execute();
        void undo();
    private:
        SPTR_Light m_light_ptr;
}; 

using SPTR_LightOffCommand = std::shared_ptr<LightOffCommand>;

#endif
