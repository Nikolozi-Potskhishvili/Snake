#pragma once
#include <vector>
class Snake
{
public:
	Snake();
	~Snake();
	void grow(int eatenFood);
	void getHit();
	void move();

private:
	std::vector<std::vector<int>> snakePosition;
	int length;
	int health;
};

class Snake
{
};


