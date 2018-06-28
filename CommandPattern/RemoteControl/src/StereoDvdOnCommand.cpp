#include "StereoDvdOnCommand.hpp"

StereoDvdOnCommand::StereoDvdOnCommand(SPTR_Stereo stereo):m_stereo(stereo){}

void StereoDvdOnCommand::execute()
{
    m_stereo->On();
    m_stereo->SetDvd();
    m_stereo->SetVolume(25);
}

void StereoDvdOnCommand::undo()
{
    m_stereo->Off();
}
