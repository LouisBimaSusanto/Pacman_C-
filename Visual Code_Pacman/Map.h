#ifndef MAP_H
#define MAP_H

class Map
{
public:
    static const int WIDTH = 10;
    static const int HEIGHT = 10;
    char layout[HEIGHT][WIDTH];

    Map();
    void render();
};

#endif
