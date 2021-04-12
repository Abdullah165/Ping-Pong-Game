#include "PlayerA.h"
#include<conio.h>
#include<iostream>


void PlayerA::set_XPosition(int xpoistion)
{
	m_XPosition = xpoistion;
}

void PlayerA::set_YPosition(int ypoistion)
{
	m_YPosition = ypoistion;
}

int PlayerA::get_XPosition() const
{
	return m_XPosition;
}

int PlayerA::get_YPosition() const
{
	return m_YPosition;
}

char PlayerA::Input()
{
	char KeyCode;
	if (_kbhit)
	{
	    KeyCode = _getch();

		switch (KeyCode)
		{
		case 'a':direction = Left; break;
		case 'd':direction = Right; break;
		case 'x':std::exit(0);
		}
	}

	return KeyCode;
}

void PlayerA::Move()
{
	switch (direction)
	{
	case Left:m_XPosition-=4; break;
	case Right:m_XPosition+=5; break;
	}
}


