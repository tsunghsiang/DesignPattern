#include "StereoRadioOnCommand.hpp"

StereoRadioOnCommand::StereoRadioOnCommand(SPTR_Stereo stereo):m_stereo(stereo){}

void StereoRadioOnCommand::execute()
{
    m_stereo->On();
    m_stereo->SetRadio();
    m_stereo->SetVolume(35);
}
