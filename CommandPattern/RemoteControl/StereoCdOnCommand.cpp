#include "StereoCdOnCommand.hpp"

StereoCdOnCommand::StereoCdOnCommand(SPTR_Stereo stereo):m_stereo(stereo){}

void StereoCdOnCommand::execute()
{
    m_stereo->On();
    m_stereo->SetCD();
    m_stereo->SetVolume(11);
}
