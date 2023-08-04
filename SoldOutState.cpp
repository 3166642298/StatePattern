#include "SoldOutState.h"

SoldOutState::SoldOutState(GumballMachine* gumballMachine)
{
	this->gumballMachine = gumballMachine;
}

void SoldOutState::insertQuarter()
{
	cout << "You can not insert a quarter,the machine is sold out" << endl;
}

void SoldOutState::ejectQuater()
{
	cout << "You cna not eject,you have not insert a quarter yet" << endl;
}

void SoldOutState::turnCrank()
{
	cout << "You turned,but there are no gumballs" << endl;
}

void SoldOutState::dispense()
{
	cout << "No gumball dispensed" << endl;
}
