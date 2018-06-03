#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <memory>

class Command
{
    public:
        virtual void execute() = 0;
    private:
};

using SPTR_Command = std::shared_ptr<Command>;

#endif
