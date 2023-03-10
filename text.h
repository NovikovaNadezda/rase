#pragma once
#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"

struct TextObj {
	sf::Font font;
	sf::Text text;
};

void textInit(TextObj& textobj, std::string str, sf::Vector2f position) {
	textobj.font.loadFromFile("DS-DIGIB.ttf");
	textobj.text.setFont(textobj.font);
	textobj.text.setString(str);
	textobj.text.setCharacterSize(FONT_SIZE);
	textobj.text.setPosition(position);
}
int score = 3;

void textUpdate(TextObj& textobj, int score) {
	textobj.text.setString(std::to_string(score));
}

void textDraw(sf::RenderWindow& window,
	const TextObj& textobj)
{
	window.draw(textobj.text);
}
