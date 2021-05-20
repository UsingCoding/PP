#pragma once
#include <iostream>
#include <string>
#include "ITask.h"

class MyTask: public ITask
{
private:
	int _value;

public:
	MyTask(int value): _value(value)
	{

	}

    void Execute() override
    {
        std::cout << "Execute thread number: " + std::to_string(_value) + "\n";
    }
};
