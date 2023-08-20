#include "Snake.h"


Snake::Snake() {
	health = 3;
	length = 1;
}

void Snake::grow(int eatenFood) {
	length += eatenFood;
}

void Snake::getHit() {
	health--;
}

void Snake::move() {

}