#pragma once

#include "GameState.h"
#include "Deck.h"
#include "Player.h"
#include <vector>
#include "Button.h"

class ClassicMode : public GameState {
private:
    Deck deck;
    std::vector<Player> players;
    int currentPlayerIndex;
    Button BasraButton;

public:
    ClassicMode();

    void handleInput(sf::Event event) override;
    void update() override;
    void render(sf::RenderWindow& window) override;

    void Basra();
};


