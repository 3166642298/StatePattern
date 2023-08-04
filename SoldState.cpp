#include "SoldState.h"

SoldState::SoldState(GumballMachine* gumballMachine)
{
	this->gumballMachine = gumballMachine;
}

void SoldState::insertQuarter()
{
	cout << "Please wait,we are alreday giving you a gumball" << endl;
}

void SoldState::ejectQuater()
{
	cout << "Sorry,you already turned the crank" << endl;
}

void SoldState::turnCrank()
{
	cout << "Turning twice dose not get you anthor gumball";
}

void SoldState::dispense()
{
	this->gumballMachine->releaseBall();
	if (this->gumballMachine->getCount() > 0)
	{
		this->gumballMachine->setState(this->gumballMachine->getNoQuarterState());
	}
	else {
		this->gumballMachine->setState(this->gumballMachine->getSoldOutState());
	}
}
