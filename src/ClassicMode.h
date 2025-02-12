#pragma once
#ifndef CLASSICMODE_H
#define CLASSICMODE_H

#include "GameState.h"
#include "Deck.h"
#include "Player.h"
#include <vector>

class ClassicMode : public GameState {
private:
    Deck deck;
    std::vector<Player> players;
    int currentPlayerIndex;

public:
    ClassicMode(int numPlayers);

    void handleInput(sf::Event event) override;
    void update() override;
    void render(sf::RenderWindow& window) override;
    void BeginDraw(int numPlayers);
};

#endif

