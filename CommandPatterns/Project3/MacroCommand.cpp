#include "MacroCommand.h"

void MacroCommand::execute()
{
	
}

void MacroCommand::add(Command *c)
{
	commands->push_back(c);
	
}
void MacroCommand::remove(Command *c)
{
	commands->remove(c);
}