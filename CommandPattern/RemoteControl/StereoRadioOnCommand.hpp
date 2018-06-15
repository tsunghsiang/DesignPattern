#ifndef STEREO_RADIO_ON_COMMAND_HPP
#define STEREO_RADIO_ON_COMMAND_HPP

#include <memory>
#include "Command.hpp"
#include "Stereo.hpp"

class StereoRadioOnCommand : public Command
{
    public:
        StereoRadioOnCommand(SPTR_Stereo stereo);
        void execute();
    private:
        SPTR_Stereo m_stereo;
};

using SPTR_StereoRadioOnCommand = std::shared_ptr<StereoRadioOnCommand>;

#endif
