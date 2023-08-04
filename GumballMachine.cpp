#include "GumballMachine.h"

GumballMachine::GumballMachine(int count)
{
	this->soldOutState = nullptr;
	this->noQuarterState = nullptr;
	this->hasQuarterState = nullptr;
	this->soldState = nullptr;
	this->state = nullptr;
	this->count = count;
}

void GumballMachine::setAllState(State* soldOutState, State* noQuarterState, State* hasQuarterState, State* soldState)
{
	this->soldOutState = soldOutState;
	this->noQuarterState = noQuarterState;
	this->hasQuarterState = hasQuarterState;
	this->soldState = soldState;
	if (this->count >= 0)
	{
		this->state = this->noQuarterState;
	}
	else {
		this->state = this->soldOutState;
	}
}

void GumballMachine::setState(State* states)
{
	this->state = states;
}

void GumballMachine::insertQuarter()
{
	this->state->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
	this->state->ejectQuater();
}

void GumballMachine::turnCrank()
{
	this->state->turnCrank();
	this->state->dispense();
}

State* GumballMachine::getNoQuarterState()
{
	return this->noQuarterState;
}

State* GumballMachine::getHasQuarterState()
{
	return this->hasQuarterState;
}

State* GumballMachine::getSoldState()
{
	return this->soldState;
}

State* GumballMachine::getSoldOutState()
{
	return this->soldOutState;
}

int GumballMachine::getCount()
{
	return this->count;
}

void GumballMachine::releaseBall()
{
	cout << "A gumball comes rolling out the slot" << endl;
	if (this->count > 0)
	{
		this->count--;
	}
}
