#pragma once
#ifndef SOLDOUTSTATE_H
#define SOLDOUTSTATE_H
#include"State.h"
#include"GumballMachine.h"
class GumballMachine;
class SoldOutState :public State {
private:
	GumballMachine* gumballMachine;
public:
	SoldOutState() = default;
	SoldOutState(GumballMachine* gumballMachine);
	void insertQuarter() override;
	void ejectQuater()override;
	void turnCrank()override;
	void dispense()override;
};
#endif