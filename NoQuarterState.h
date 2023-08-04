#pragma once
#ifndef NOQUARTERSTATE_H
#define NOQUARTERSTATE_H
#include"State.h"
#include"GumballMachine.h"
class GumballMachine;
class NoQuarterState :public State {
private:
	GumballMachine* gumballMachine;
public:
	NoQuarterState()=default;
	NoQuarterState(GumballMachine* gumballMachine);
	void insertQuarter() override;
	void ejectQuater()override;
	void turnCrank()override;
	void dispense()override;
};
#endif // !NOQUARTERSTATE_H
