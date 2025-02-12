#include "Card.h"
#include <iostream>

Card::Card(int value, Effect, std::string texturePath)
    : value(value), effect(effect) {

    if (!texture.loadFromFile(texturePath)) {
        throw std::runtime_error("Failed to load card texture: " + texturePath);
    }

    sprite.setTexture(texture);
}

void Card::draw(sf::RenderWindow& window, float x, float y) {
    sprite.setPosition(x, y);
    window.draw(sprite);
}

int Card::getValue() const { return value; }
Card::Effect Card::getEffect() const { return effect; }
