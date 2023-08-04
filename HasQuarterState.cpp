#include "HasQuarterState.h"

HasQuarterState::HasQuarterState(GumballMachine* gumballMachine)
{
	this->gumballMachine = gumballMachine;
}

void HasQuarterState::insertQuarter()
{
	cout << "You can not insert another quarter" << endl;
}

void HasQuarterState::ejectQuater()
{
	cout << "Quarter returned!" << endl;
	this->gumballMachine->setState(this->gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank()
{
	cout << "You turned....." << endl;
	this->gumballMachine->setState(this->gumballMachine->getSoldState());
}

void HasQuarterState::dispense()
{
	cout << "No gumball dispensed" << endl;
}
