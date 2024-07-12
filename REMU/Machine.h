#pragma once
#include "CPU.h"
#include "RAM.h"

class Machine {
public:
	Machine(int RamSize);

	virtual bool Loop();
	virtual std::shared_ptr<CPU> ReturnCPU() { return cpu; }
	virtual std::shared_ptr<Bus> ReturnBUS() { return bus; }
private:
	std::shared_ptr<CPU> cpu;
	std::shared_ptr<Bus> bus;
};

