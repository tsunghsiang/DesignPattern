#ifndef STEREO_CD_OFF_COMMAND_HPP
#define STEREO_CD_OFF_COMMAND_HPP

#include <memory>
#include "Command.hpp"
#include "Stereo.hpp"

class StereoCdOffCommand : public Command
{
    public:
        StereoCdOffCommand(SPTR_Stereo stereo);
        void execute();
        void undo();
    private:
        SPTR_Stereo m_stereo;
};

using SPTR_StereoCdOffCommand = std::shared_ptr<StereoCdOffCommand>;

#endif
