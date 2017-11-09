#pragma once
//@Author Sean Nash De Andrade
//@Login C00217019
#include "State.h"
class Jumping : public State//Jumping can Change to Climbing or Idle
{
public:
	Jumping() {  };
	~Jumping() {  };
	void m_idle(Animation* a);
	void m_climbing(Animation* a);
};
