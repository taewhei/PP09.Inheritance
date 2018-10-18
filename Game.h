#pragma once
#include "SDL.h"
#include"GameObject.h"
#include"Player.h"

class Game
{
public:
	Game() {}
	~Game() {}
	bool init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void render();

	void handleEvents();
	void clean();
	void update();
	bool running() { return m_bRunning; }

private:
	SDL_Window * m_pWindow;
	SDL_Renderer* m_pRenderer;
	bool m_bRunning;
	int m_CurrentFrame;
	GameObject m_go;
	Player m_player;
};
