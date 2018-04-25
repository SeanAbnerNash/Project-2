#ifndef GAME_H
#define GAME_H
//@Author Sean Nash de Andrade
//@Login C00217019
//Project 2 


#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include "Player.h"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Graphics.hpp>


#include <Debug.h>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>
#include "Block.h"

using namespace std;
using namespace sf;
using namespace glm;

class Game
{
public:
	Game();
	Game(sf::ContextSettings settings);
	~Game();
	void run();

private:
	RenderWindow window;

	Clock clock;
	Time time;
	Block m_NPC;
	Player m_viewPoint;

	bool animate = false;
	vec3 animation = vec3(0.0f);
	float rotation = 0.0f;
	bool isRunning = false;

	void initialize();
	void update();
	void render();
	void unload();
	void drawScreen(mat4 t_mvp, GLint t_ID, const GLfloat t_colour[]);
};

#endif