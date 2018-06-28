#ifndef STEREO_RADIO_OFF_COMMAND_HPP
#define STEREO_RADIO_OFF_COMMAND_HPP

#include <memory>
#include "Command.hpp"
#include "Stereo.hpp"

class StereoRadioOffCommand : public Command
{
    public:
        StereoRadioOffCommand(SPTR_Stereo stereo);
        void execute();
        void undo();
    private:
        SPTR_Stereo m_stereo;
};

using SPTR_StereoRadioOffCommand = std::shared_ptr<StereoRadioOffCommand>;

#endif
