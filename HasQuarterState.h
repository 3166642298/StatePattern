#pragma once
#ifndef HASQUARTERSTATE_H
#define HASQUARTERSTATE_H
#include"State.h"
#include"GumballMachine.h"
class GumballMachine;
class HasQuarterState :public State {
private:
	GumballMachine* gumballMachine;
public:
	HasQuarterState() = default;
	HasQuarterState(GumballMachine* gumballMachine);
	void insertQuarter() override;
	void ejectQuater()override;
	void turnCrank()override;
	void dispense()override;
};
#endif // !HASQUARTERSTATE_H
