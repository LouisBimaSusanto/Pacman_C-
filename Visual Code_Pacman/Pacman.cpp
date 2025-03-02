#include "Pacman.h"

Pacman::Pacman(int startX, int startY) : x(startX), y(startY) {}

void Pacman::move(int dx, int dy)
{
    x += dx;
    y += dy;
}