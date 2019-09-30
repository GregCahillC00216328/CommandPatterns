#pragma once
#include <iostream>
#include <list>
#include "Command.h"

class MacroCommand : public Command
{
	MacroCommand();
	virtual ~MacroCommand();
	virtual void add(Command*);
	virtual void remove(Command*);
	virtual void execute();
private:
	std::list<Command*>* commands;
};