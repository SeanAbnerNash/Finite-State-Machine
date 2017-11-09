#pragma once
//@Author Sean Nash De Andrade
//@Login C00217019
#include <iostream>
#include "State.h"


using namespace std;
class Idle : public State//Idle Can change to any state or remain at Idle
{
public:
	Idle() { };
	~Idle() {  };
	void m_jumping(Animation* a);
	void m_climbing(Animation* a);
	void m_idle(Animation* a);

};
