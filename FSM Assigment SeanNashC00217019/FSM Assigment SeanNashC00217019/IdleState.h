#pragma once
#include <iostream>
#include "State.h"


using namespace std;
class Idle : public State
{
public:
	Idle() { };
	~Idle() {  };
	void jumping(Animation* a);
	void climbing(Animation* a);
	void idle(Animation* a);
};
