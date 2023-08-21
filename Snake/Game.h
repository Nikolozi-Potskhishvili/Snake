#pragma once
#include "SDL.h"
#include <stdio.h>
#include <iostream>
class Game
{
public:
	Game();
	~Game();
	void init(const char* title, int xPos, int yPos, int height, int width, bool fullScrean);
	void handleEvent();
	void update();
	void render();
	void clean();
	bool running();

private:
	bool runs;
	int cnt = 0;
	SDL_Window* window;
	SDL_Renderer* renderer;
};

