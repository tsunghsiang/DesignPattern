#include "StereoCdOffCommand.hpp"

StereoCdOffCommand::StereoCdOffCommand(SPTR_Stereo stereo):m_stereo(stereo){}

void StereoCdOffCommand::execute()
{
    m_stereo->Off();
}
