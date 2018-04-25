#include <Game.h>
//@Author Sean Nash de Andrade
//@Login C00217019
//Project 2 

int main(void)
{
	sf::ContextSettings settings;
	settings.depthBits = 24u;
	settings.antialiasingLevel = 4u;
	Game& game = Game(settings);
	game.run();
}