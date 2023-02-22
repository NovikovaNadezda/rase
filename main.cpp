#include <SFML/Graphics.hpp>
#include "settings.h"
#include "Roadobj.h"
#include "player.h"
#include "obstacle.h"
#include "text.h"
using namespace sf;

int main()
{

	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE, Style::Close | Style::Titlebar);
	window.setPosition(Vector2i{ (1920 - (int)WINDOW_WIDTH) / 2,0 });
	window.setFramerateLimit(FPS);

	Roadobj road1, road2;
	roadObjInit(road1, ROAD1_START_POS, Doroga_File_Name, 100.f);
	roadObjInit(road2, ROAD2_START_POS, Doroga_File_Name, 100.f);
	Roadobj grass1, grass2;
	roadObjInit(grass1, GRASS1_START_POS, Trava_File_Name, 0.f);
	roadObjInit(grass2, GRASS2_START_POS, Trava_File_Name, 0.f);
	Player player;
	playerInit(player);
	Obstacle obs1;
	obstacleInit(obs1, "car.png");
	TextObj scoreText;
	textInit(scoreText, std::to_string(score), TEXT_POS);


	while (window.isOpen())
	{

		Event event;
		while (window.pollEvent(event))
		{

			if (event.type == Event::Closed)

				window.close();
		}
		//Update
		roadObjUpdate(grass1);
		roadObjUpdate(grass2);
		roadObjUpdate(road1);
		roadObjUpdate(road2);
		playerUpdate(player);
		obstacleUpdate(obs1);
		FloatRect playerHitBox = player.sprite.getGlobalBounds();
		FloatRect obs1HitBox = obs1.sprite.getGlobalBounds();
		if (playerHitBox.intersects(obs1HitBox)) {
			
		}
		textUpdate(scoreText, score);
		//Draw
		roadObjDraw(window, grass1);
		roadObjDraw(window, grass2);
		//RoadObjDraw(window, Pesok);
		roadObjDraw(window, road1);
		roadObjDraw(window, road2);
		playerDraw(window, player);
		obstacleDraw(window, obs1);
		window.display();
	}

	return 0;
}
