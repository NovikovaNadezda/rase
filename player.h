#pragma once
#include "settings.h"


struct Player {
	sf::Texture texture;
	sf::Sprite sprite;
	float speedx;
};

void playerInit(Player& player) {
	player.texture.loadFromFile(PLAYER_FILE_NAME);
	player.sprite.setTexture(player.texture);
	player.sprite.setPosition(PLAYER_START_POS);
	player.speedx = 0.f;
}

void playerUpdate(Player& player) {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		player.speedx = -PLAYER_SPEED;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		player.speedx = PLAYER_SPEED;
	player.sprite.move(player.speedx, 0);
	player.speedx = 0;

	if (player.sprite.getPosition().x <= LEFT_ROADSIDE)
		player.sprite.setPosition(LEFT_ROADSIDE, PLAYER_START_POS.y);
	if (player.sprite.getPosition().x >= RIGHT_ROADSIDE - PLAYER_WIDTH)
		player.sprite.setPosition(RIGHT_ROADSIDE - PLAYER_WIDTH, PLAYER_START_POS.y);
}

void playerDraw(sf::RenderWindow& window, Player& obj) {
	window.draw(obj.sprite);
}
