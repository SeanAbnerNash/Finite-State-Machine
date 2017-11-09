#pragma once
//@Author Sean Nash De Andrade
//@Login C00217019
#include <iostream>
#include "State.h"
#include "IdleState.h"
using namespace std;
class Climbing : public State//Climb can change to Itself or Idle, nothing else
{
public:
	Climbing() {  };
	~Climbing() {  };
	void m_climbing(Animation* a);
	void m_idle(Animation* a);

};
