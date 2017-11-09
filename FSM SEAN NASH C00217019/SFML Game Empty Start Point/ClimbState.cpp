#include "JumpState.h"
#include "IdleState.h"
#include "ClimbState.h"

void Climbing::m_climbing(Animation * a)
{
	cout << "Going from Climbing to Climbing More" << endl;
	a->m_setCurrent(new Climbing());
	delete this;
}

void Climbing::m_idle(Animation * a)
{
	cout << "Going from Climbing to Idling" << endl;
	a->m_setCurrent(new Idle());
	delete this;
}
