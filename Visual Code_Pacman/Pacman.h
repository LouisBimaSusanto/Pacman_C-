// Header Pacman

#ifndef PACMAN_H
#define PACMAN_H

class Pacman
{
public:
    int x, y; // Position Pacman
    Pacman(int startX, int startY);
    void move(int dx, int dy);
};

#endif