#ifndef MACRO_COMMAND_HPP
#define MACRO_COMMAND_HPP

#include <iostream>
#include <memory>
#include <list>
#include <algorithm>
#include "Command.hpp"

class MacroCommand : public Command
{
    public:
        MacroCommand(const std::list<SPTR_Command> & cmds);
        void execute();
        void undo();
    private:
        std::list<SPTR_Command> m_macro_cmds;
};

using SPTR_MacroCommand = std::shared_ptr<MacroCommand>;

#endif
