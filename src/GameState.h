#pragma once
#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <SFML/Graphics.hpp>

class GameState {
public:
    virtual ~GameState() = default;

    virtual void handleInput(sf::Event event) = 0;
    virtual void update() = 0;
    virtual void render(sf::RenderWindow& window) = 0;

};

#endif
