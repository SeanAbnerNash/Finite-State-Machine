#include "IdleState.h"

void Idle::jumping(Animation* a)
{
	cout << "Idle >> Jumping" << endl;
	a->setCurrent(new Idle());
	delete this;
}
void Idle::climbing(Animation* a)
{
	cout << "Idle >> Climbing" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::idle(Animation * a)
{
	cout << "Idle >> Climbing" << endl;
	a->setCurrent(new Idle());
	delete this;
}
