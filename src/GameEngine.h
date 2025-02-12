#pragma once
#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "GameState.h"
#include <SFML/Graphics.hpp>

class GameEngine {
private:
    GameState* currentState;

public:
    GameEngine();
    ~GameEngine();

    void changeState(GameState* newState);
    void handleInput(sf::Event event);
    void update();
    void render(sf::RenderWindow& window);
};

#endif
