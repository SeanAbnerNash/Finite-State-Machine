//@Author Sean Nash De Andrade
//@Login C00217019

#include "Animation.h"
#include "IdleState.h"

Animation::Animation()
{
	m_current = new Idle();
}

void Animation::m_idle()
{
	m_current->m_idle(this);
}

void Animation::m_jumping()
{
	m_current->m_jumping(this);
}

void Animation::m_climbing()
{
	m_current->m_climbing(this);
}
