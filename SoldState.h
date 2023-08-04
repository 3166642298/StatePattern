#pragma once
#ifndef SOLDSTATE_H
#define SOLDSTATE_H
#include"State.h"
#include"GumballMachine.h"
class GumballMachine;
class SoldState :public State {
private:
	GumballMachine* gumballMachine;
public:
	SoldState() = default;
	SoldState(GumballMachine* gumballMachine);
	void insertQuarter() override;
	void ejectQuater()override;
	void turnCrank()override;
	void dispense()override;
};
#endif // !SOLDSTATE_H
