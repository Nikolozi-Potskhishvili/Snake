#include "Game.h"

Game::Game() {
	
}

Game::~Game() {

}

void Game::init(const char* title, int xPos, int yPos, int height, int width, bool fullScrean) {
	int flags = 0;
	if (fullScrean) {
		flags == SDL_WINDOW_FULLSCREEN;
	}
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "Subsystem initialized" << '\n';
		window = SDL_CreateWindow(title, xPos, yPos, width, height, flags);
		if(window) {
			std::cout << "Window Created" << '\n';
		}
		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer) {
			SDL_SetRenderDrawColor(renderer, 100, 255, 100, 255);
			std::cout << "Renderer Created" << '\n';
		}
		runs = true;
	}
	else {
		runs = false;
	}
}

void Game::handleEvent() {
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type) {
		case SDL_QUIT:
			runs = false;
			break;
		default:
			break;
	}
}

void Game::update() {
	cnt++;
	std::cout << cnt << '\n';
}

void Game::render() {
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}

void Game::clean() {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	std::cout << "Game Cleared" << '\n';

}

bool Game::running() {
	return runs;
}
