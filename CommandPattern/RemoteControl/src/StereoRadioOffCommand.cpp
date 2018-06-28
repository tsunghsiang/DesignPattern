#include "StereoRadioOffCommand.hpp"

StereoRadioOffCommand::StereoRadioOffCommand(SPTR_Stereo stereo):m_stereo(stereo){}

void StereoRadioOffCommand::execute()
{
    m_stereo->Off();
}

void StereoRadioOffCommand::undo()
{
    m_stereo->On();
    m_stereo->SetRadio();
    m_stereo->SetVolume(35);
}
