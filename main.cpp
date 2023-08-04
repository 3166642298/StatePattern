#include<iostream>
#include"GumballMachine.h"
#include"HasQuarterState.h"
#include"NoQuarterState.h"
#include"SoldOutState.h"
#include"SoldState.h"
#include"State.h"
using namespace std;
int main()
{
	GumballMachine* gumballMachine = new GumballMachine(1);

	cout << gumballMachine->getCount() << endl;;
	State* soldState = new SoldState(gumballMachine);
	State* soldOutState = new SoldOutState(gumballMachine);
	State* hasQuarterState = new HasQuarterState(gumballMachine);
	State* noQuarterState = new NoQuarterState(gumballMachine);
	gumballMachine->setAllState(soldOutState, noQuarterState, hasQuarterState, soldState);
	gumballMachine->insertQuarter();
	gumballMachine->ejectQuarter();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	cout<<gumballMachine->getCount();
	return 0;
}