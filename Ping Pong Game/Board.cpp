#include "Board.h"
#include<iostream>
#include"PlayerA.h"
#include"PlayerB.h"
#include"Ball.h"

PlayerA playerA;
PlayerB playerB;
Ball ball;
int playerYPosition;

Board::Board()
{
	m_Width = 50;
	m_Height = 30;

	playerA.set_XPosition(m_Width / 3);
	playerA.set_YPosition(m_Height / 1.1);

	playerB.set_XPosition(m_Width / 3);
	playerB.set_YPosition(m_Height - 28);

	playerYPosition = playerA.get_YPosition();
}

void Board::Draw()
{
	system("cls");
	for (int height = 0; height < m_Height; height++)
	{
		for (int width = 0; width < m_Width; width++)
		{
			if (height == 0 || height == m_Height - 1) std::cout << "*";
			else if (width == 0 || width == m_Width - 1) std::cout << "*";
			else if (height == playerA.get_YPosition() && width == playerA.get_XPosition()) std::cout << "AAAAAA";
			else if (height == playerB.get_YPosition() && width == playerB.get_XPosition()) std::cout << "BBBBBB";
			else if (ball.get_YPosition() == playerA.get_YPosition()) playerYPosition--;
			else if (ball.get_YPosition() == playerB.get_YPosition()) playerYPosition++;
			else if (height == ball.get_YPosition() && width == ball.get_XPosition()) std::cout << "O";
			else std::cout << " ";
		}std::cout << "\n";
	}

	if (ball.get_YPosition() == m_Height - 1)
	{
		std::cout << "Player B win..\n";

	}
	else if (ball.get_YPosition() == 1)
	{
		std::cout << "Player A win..\n";
	}
	else if (ball.get_YPosition() < playerYPosition)
	{
		ball.set_YPosition(1);
	}
	else
	{
		ball.set_YPosition(-1);
	}

	if (playerA.Input() == 'a' || playerA.Input() == 'd')
		playerA.Move();

	else if (playerB.Input() == 'l' || playerB.Input() == 'j')
		playerB.Move();
}

int Board::get_Width() const
{
	return m_Width;
}

int Board::get_Height() const
{
	return m_Height;
}
