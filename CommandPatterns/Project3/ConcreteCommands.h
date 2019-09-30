#pragma once
#include "Command.h"

class UndoCommand : public Command
{
public:
	virtual void execute() { undo(); }
};

class RedoCommand : public Command
{
public:
	virtual void execute() { redo(); };
};