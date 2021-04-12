#include "PlayerB.h"
#include<conio.h>
#include<iostream>

void PlayerB::set_XPosition(int xpoistion)
{
	m_XPosition = xpoistion;
}

void PlayerB::set_YPosition(int ypoistion)
{
	m_YPosition = ypoistion;
}

int PlayerB::get_XPosition() const
{
	return m_XPosition;
}

int PlayerB::get_YPosition() const
{
	return m_YPosition;
}

char PlayerB::Input()
{
	char KeyCode;
	if (_kbhit)
	{
		KeyCode = _getch();

		switch (KeyCode)
		{
		case 'j':direction = Left; break;
		case 'l':direction = Right; break;
		case 'x':exit(0);
		}
	}

	return KeyCode;
}

void PlayerB::Move()
{
	switch (direction)
	{
	case Left:m_XPosition -= 4; break;
	case Right:m_XPosition += 5; break;
	}
}
