//@Author Sean Nash De Andrade
//@Login C00217019

#include "IdleState.h"
#include "JumpState.h"
#include "ClimbState.h"

void Idle::m_jumping(Animation* a)
{
	cout << "Idle >> Jumping" << endl;
	a->m_setCurrent(new Jumping());
	delete this;
}
void Idle::m_climbing(Animation* a)
{
	cout << "Idle >> Climbing" << endl;
	a->m_setCurrent(new Climbing());
	delete this;
}

void Idle::m_idle(Animation * a)
{
	cout << "Idle >> Idle More" << endl;
	a->m_setCurrent(new Idle());
	delete this;
}

