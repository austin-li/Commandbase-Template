#ifndef ToggleDrive_H
#define ToggleDrive_H

#include "../CommandBase.h"

class ToggleDrive : public CommandBase {
public:
	ToggleDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ToggleDrive_H
