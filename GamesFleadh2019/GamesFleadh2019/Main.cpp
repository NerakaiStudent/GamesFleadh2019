/// <summary>
/// simple game loop for SFML[2.4.2]
/// 
/// @author Emmett Byrne
/// @date 25-11-17
/// </summary>

#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 

#include "Game.h"
#include <cstdlib>
#include <ctime>

/// <summary>
/// main enrtry point
/// </summary>
/// <returns>true</returns>
int main()
{
	std::srand(std::time(nullptr));

	Game game;
	game.run();

	return 1;
}