#include "Board.h"

Board::Board(int height, int width) {
	h = height;
	w = width;
	board.resize(w);
	for (auto x : board) {
		x.resize(h);
	}
}


void Board::spawnFood(int row, int col) {
	if (board[row][col] != 1) {
		board[row][col] = 1;
		std::cout << '*';
	}
}
