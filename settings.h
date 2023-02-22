#pragma once
#include <SFML/Graphics.hpp>

const float WINDOW_WIDTH = 800;
const float WINDOW_HEIGHT = 1000;
const std::string WINDOW_TITLE = "SFML Racing P53122";
const float FPS = 60.f;

const sf::Vector2f GRASS1_START_POS{ 0.f, 0.f };
const sf::Vector2f GRASS2_START_POS{ 0.f, -WINDOW_HEIGHT };
const std::string Trava_File_Name("grass.jpg");

const sf::Vector2f ROAD1_START_POS{ 100.f, 0.f };
const sf::Vector2f ROAD2_START_POS{ 100.f, -WINDOW_HEIGHT };
const std::string Doroga_File_Name("road.png");

const float ROADOBJ_SPEEDY = 10.f;
const float LEFT_ROADSIDE = 100.f;
const float RIGHT_ROADSIDE = 500.f;

const std::string PLAYER_FILE_NAME("car.png");
const float PLAYER_WIDTH = 85.f;
const float PLAYER_HEIGHT = 168.f;
sf::Vector2f PLAYER_START_POS{
	(WINDOW_WIDTH - PLAYER_WIDTH) / 2.f,
	WINDOW_HEIGHT - PLAYER_HEIGHT - 10.f
};
const float PLAYER_SPEED = 5.f;
const sf::Vector2f OBCTACLE_START_POS{ 0.f, 0.f };
const float OBCTACLE_SPEEDY = 5.f;
const sf::Vector2f obstacle{ 100.f, 0.f };
const std::string obstacle_File_Name("car(1).png");
const unsigned int FONT_SIZE = 64;
const sf::Vector2f TEXT_POS{ 750.f, -900.f };
