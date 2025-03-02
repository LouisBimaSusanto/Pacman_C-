#include <iostream>
#include "Map.h"
#include "Ghost.h"
#include "Pacman.h"

using namespace std;

int main()
{
    Map gameMap;
    Pacman pac(1, 1);
    Ghost ghost(8, 8);

    gameMap.render();

    std::cout << "Pacman start at (" << pac.x << "," << pac.y << ")\n";
    std::cout << "Ghost start at (" << ghost.x << "," << ghost.y << ")\n";

    return 0;
}
