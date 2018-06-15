#ifndef STEREO_DVD_ON_COMMAND_HPP
#define STEREO_DVD_ON_COMMAND_HPP

#include <memory>
#include "Command.hpp"
#include "Stereo.hpp"

class StereoDvdOnCommand : public Command
{
    public:
        StereoDvdOnCommand(SPTR_Stereo stereo);
        void execute();
    private:
        SPTR_Stereo m_stereo;
};

using SPTR_StereoDvdOnCommand = std::shared_ptr<StereoDvdOnCommand>;

#endif
