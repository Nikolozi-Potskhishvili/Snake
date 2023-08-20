#pragma once
#include <vector>
class Graphics
{
public:
	Graphics();
	void drawMap(std::vector<std::vector<int>> board, std::vector<std::vector<int>> snakePosition);
	void redrawMap(std::vector<std::vector<int>> board, std::vector<std::vector<int>> snakePosition);
	void moveSnake(std::vector<std::vector<int>> board, std::vector<std::vector<int>> snakePosition);
	 
private:

};

