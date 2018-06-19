#include "MacroCommand.hpp"

MacroCommand::MacroCommand(const std::list<SPTR_Command> & cmds):m_macro_cmds(cmds){}

void MacroCommand::execute()
{
    for_each(m_macro_cmds.begin(), 
             m_macro_cmds.end(), 
             [](SPTR_Command & cmd){ cmd->execute(); });
}

void MacroCommand::undo()
{
    for_each(m_macro_cmds.begin(), 
             m_macro_cmds.end(), 
             [](SPTR_Command & cmd){ cmd->undo(); });
}

