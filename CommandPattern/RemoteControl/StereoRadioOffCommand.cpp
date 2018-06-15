#include "StereoRadioOffCommand.hpp"

StereoRadioOffCommand::StereoRadioOffCommand(SPTR_Stereo stereo):m_stereo(stereo){}

void StereoRadioOffCommand::execute()
{
    m_stereo->Off();
}
