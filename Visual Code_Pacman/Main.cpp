#include <iostream>
#include <conio.h> // Untuk _getch()
#include <windows.h>
#include "Map.h"
#include "Ghost.h"
#include "Pacman.h"

using namespace std;

void gameLoop(Pacman &pac, Map &gameMap)
{
    bool isRunning = true;
    while (isRunning)
    {
        system("cls");    // Bersihkan layar (Windows)
        gameMap.render(); // Tampilkan peta
        std::cout << "Gunakan WASD atau Arrow Keys untuk bergerak, tekan 'q' untuk keluar.\n";

        if (_kbhit()) // Cek apakah ada input keyboard
        {
            char input = _getch(); // Tangkap input

            int dx = 0, dy = 0;

            // Cek Arrow Key (getch pertama akan return 224)
            if (input == 224)
            {
                input = _getch(); // Ambil kode tombol berikutnya
            }

            switch (input)
            {
            case 'w':
            case 72: // Untuk bergerak ke Atas
                dy = -1;
                break;
            case 's':
            case 80: // Untuk bergerak ke Bawah
                dy = 1;
                break;
            case 'a':
            case 75: // Untuk bergerak ke Kiri
                dx = -1;
                break;
            case 'd':
            case 77: // Untuk bergerak ke Kanan
                dx = 1;
                break;
            case 'q':
                isRunning = false;
                break; // Keluar
            default:
                break;
            }

            pac.move(dx, dy, gameMap);
        }

        Sleep(100);
    }
}

int main()
{
    Map gameMap;
    Pacman pac(1, 1);
    Ghost ghost(8, 8);

    gameLoop(pac, gameMap);

    return 0;
}
