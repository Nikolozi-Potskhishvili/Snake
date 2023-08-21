#pragma once
#include <vector>
class Board
{
public:
	Board(int h, int w);
	void spawnFood(int row, int col);

private:
	std::vector<std::vector<int>> board;
	int h;
	int w;
};


