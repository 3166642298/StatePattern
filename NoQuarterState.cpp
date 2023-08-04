#include "NoQuarterState.h"

NoQuarterState::NoQuarterState(GumballMachine* gumballMachine)
{
	this->gumballMachine = gumballMachine;
}

void NoQuarterState::insertQuarter()
{
	cout << "You insert a quarter" << endl;
	this->gumballMachine->setState(this->gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuater()
{
	cout << "You have not inserted a quarter" << endl;
}

void NoQuarterState::turnCrank()
{
	cout << "You turned,but there is no quarter" << endl;
}

void NoQuarterState::dispense()
{
	cout << "You need to pay first" << endl;
}
