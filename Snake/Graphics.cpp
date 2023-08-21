#include "Graphics.h"
#include <iostream>


Graphics::Graphics() {

}

void Graphics::drawMap(std::vector<std::vector<int>> board, std::vector<std::vector<int>> snakePosition) {
	for (int i = 0; i < board.size(); i++) {
		std::cout << "#";

	}
	std::cout << '\n';
	for (int i = 0; i < board[0].size() - 2; i++) {
		std::cout << "#";
		for (int k = 0; k < board.size() - 2; k++) {
			std::cout << " ";
		}
		std::cout << "#";
		if (i != board[0].size() - 1) std::cout << '\n';
	}
	for (int i = 0; i < board.size(); i++) {
		std::cout << "#";
	}
	std::cout << '\n';
}