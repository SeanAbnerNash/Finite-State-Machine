#pragma once
#include <iostream>
#include "State.h"
#include "IdleState.h"
using namespace std;
class Climbing : public State
{
public:
	Climbing() {  };
	~Climbing() {  };
	void idle(Animation* a)
	{
		cout << "Going from Climbing to Idling" << endl;
		a->setCurrent(new Idle());
		delete this;
	}
};
