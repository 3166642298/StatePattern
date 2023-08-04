[p+1]#pragma once
#ifndef STATE_H
#define STATE_H
#include<iostream>
using namespace std;
class State {
public:
	virtual void insertQuarter();//投入25分钱
	virtual void ejectQuater();//退还25分钱
	virtual void turnCrank();//转动曲柄
	virtual void dispense();//分发糖果
};
#endif 