#include "JumpState.h"
#include "IdleState.h"
#include "ClimbState.h"

void Jumping::m_idle(Animation * a)
{
	cout << "Jump >> Idle" << endl;
	a->m_setCurrent(new Idle());
	delete this;
}

void Jumping::m_climbing(Animation * a)
{
	cout << "Jump >> Climbing" << endl;
	a->m_setCurrent(new Climbing());
	delete this;
}
