#include "StereoDvdOffCommand.hpp"

StereoDvdOffCommand::StereoDvdOffCommand(SPTR_Stereo stereo):m_stereo(stereo){}

void StereoDvdOffCommand::execute()
{
    m_stereo->Off();
}

void StereoDvdOffCommand::undo()
{
    m_stereo->On();
    m_stereo->SetDvd();
    m_stereo->SetVolume(25);
}
