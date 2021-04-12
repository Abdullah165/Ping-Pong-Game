#pragma once
class Board
{
private:
	int m_Width, m_Height;
public:
	Board();
	void Draw();
	int get_Width() const;
	int get_Height() const;
};

