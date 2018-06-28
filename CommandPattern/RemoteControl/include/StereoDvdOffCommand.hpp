#ifndef STEREO_DVD_OFF_COMMAND_HPP
#define STEREO_DVD_OFF_COMMAND_HPP

#include <memory>
#include "Command.hpp"
#include "Stereo.hpp"

class StereoDvdOffCommand : public Command
{
    public:
        StereoDvdOffCommand(SPTR_Stereo stereo);
        void execute();
        void undo();
    private:
        SPTR_Stereo m_stereo;
};

using SPTR_StereoDvdOffCommand = std::shared_ptr<StereoDvdOffCommand>;

#endif
