[p+1]#pragma once
#ifndef STATE_H
#define STATE_H
#include<iostream>
using namespace std;
class State {
public:
	virtual void insertQuarter();//Ͷ��25��Ǯ
	virtual void ejectQuater();//�˻�25��Ǯ
	virtual void turnCrank();//ת������
	virtual void dispense();//�ַ��ǹ�
};
#endif 