#include "StereoDvdOffCommand.hpp"

StereoDvdOffCommand::StereoDvdOffCommand(SPTR_Stereo stereo):m_stereo(stereo){}

void StereoDvdOffCommand::execute()
{
    m_stereo->Off();
}
