#include "StereoCdOffCommand.hpp"

StereoCdOffCommand::StereoCdOffCommand(SPTR_Stereo stereo):m_stereo(stereo){}

void StereoCdOffCommand::execute()
{
    m_stereo->Off();
}

void StereoCdOffCommand::undo()
{
    m_stereo->On();
    m_stereo->SetCD();
    m_stereo->SetVolume(11);
}
