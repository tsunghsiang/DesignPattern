#ifndef STEREO_CD_ON_COMMAND_HPP
#define STEREO_CD_ON_COMMAND_HPP

#include <memory>
#include "Command.hpp"
#include "Stereo.hpp"

class StereoCdOnCommand : public Command
{
    public:
        StereoCdOnCommand(SPTR_Stereo stereo);
        void execute();
    private:
        SPTR_Stereo m_stereo;
};

using SPTR_StereoCdOnCommand = std::shared_ptr<StereoCdOnCommand>;

#endif
