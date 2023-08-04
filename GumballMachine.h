#pragma once
#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H
#include"State.h"
#include"HasQuarterState.h"
#include"NoQuarterState.h"
#include"SoldOutState.h"
#include"SoldState.h"
class SoldState;
class HasQuarterState;
class NoQuarterState;
class SoldOutState;
class GumballMachine {
private:
	State* soldOutState;
	State* noQuarterState;
	State* hasQuarterState;
	State* soldState;
	State* state;
	int count;
public:
	GumballMachine() = default;
	GumballMachine(int count);
	void setAllState(State* soldOutState, State* noQuarterState, State* hasQuarterState, State* soldState);
	void setState(State* state);
	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	State* getNoQuarterState();
	State* getHasQuarterState();
	State* getSoldState();
	State* getSoldOutState();
	int getCount();
	void releaseBall();
};
#endif 