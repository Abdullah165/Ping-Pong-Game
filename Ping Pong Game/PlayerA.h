#pragma once
class PlayerA
{
private:
	int m_XPosition, m_YPosition;
	int playerYPosition;
	enum Direction
	{
		Left = 1,
		Right,
	};

	Direction direction;

public:
	void set_XPosition(int xpoistion);
	void set_YPosition(int ypoistion);
	int get_XPosition() const;
	int get_YPosition() const;
	char Input();
	void Move();
};

