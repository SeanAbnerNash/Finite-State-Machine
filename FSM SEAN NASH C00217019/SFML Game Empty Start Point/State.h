#pragma once
//@Author Sean Nash De Andrade
//@Login C00217019
#include <iostream>
#include "Animation.h"
using namespace std;
class State //Base State
{
public:
	virtual void m_idle(Animation* a)
	{
	}

	virtual void m_jumping(Animation* a)
	{
	}

	virtual void m_climbing(Animation* a)
	{
	}
};
