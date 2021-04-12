#include<iostream>
#include"Board.h"
#include<Windows.h>


int main()
{
	Board board;

	while (true)
	{
		board.Draw();
        Sleep(70);
	}

	std::cin.get();
}