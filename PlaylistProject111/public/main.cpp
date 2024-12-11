#include "SystemDriver.h"

int main()
{
    // Create a SystemDriver object and run the system
    SystemDriver system;
    system.run();
    return 0;
}

/*
g++ -Wall -Wextra -g3 *.cpp -o main
g++ -Wall -Wextra -g3 SystemDriver.cpp main.cpp Song.cpp Playlist.cpp -o main
g++ -Wall -Wextra -g3 SystemDriver.cpp Song.cpp Playlist.cpp main.cpp -o main -std=c++14 -I/opt/homebrew/Cellar/sfml/2.6.2/include -L/opt/homebrew/Cellar/sfml/2.6.2/lib -lsfml-system -lsfml-audio
./main
*/
