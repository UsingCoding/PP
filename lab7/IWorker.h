#pragma once
#include <windows.h>
#include <iostream>
#include "ITask.h"
#include <vector>

extern CRITICAL_SECTION CriticalSection;

class Worker
{
private:
	HANDLE m_thread;
	bool _bisy = false;
	bool _end = false;

public:
	Worker()
	{
	}

	~Worker()
	{
		WaitForSingleObject(m_thread, INFINITE);
	}

	bool ExecuteTask(ITask* taskToRun);
	bool IsBusy();
};
