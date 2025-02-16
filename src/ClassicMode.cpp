#include "ClassicMode.h"
#include <iostream>

ClassicMode::ClassicMode()
    : currentPlayerIndex(0),
    BasraButton(600, 500, 100, 50, "Basra", std::bind(&ClassicMode::Basra, this)) {

    deck.shuffle();

    // Create default 2 players (you can change this)
    int numPlayers = 2; //TODO Add dynamic player numbers later

    for (int i = 0; i < numPlayers; i++) {
        players.emplace_back("Player " + std::to_string(i + 1));

        // Give each player 4 starting cards
        for (int j = 0; j < 4; j++) {
            players[i].drawCard(deck.drawCard());
        }
    }
}



void ClassicMode::handleInput(sf::Event event) {
    if (event.type == sf::Event::MouseButtonPressed) {
        sf::Vector2f mousePos(event.mouseButton.x, event.mouseButton.y);
        BasraButton.handleClick(mousePos);
    }
}

void ClassicMode::Basra() {
    std::cout << "UNO Button Pressed!" << std::endl;

    //TODO Implement Basra logic
    
}


void ClassicMode::update() {

    //TODO Placeholder: Add game logic (e.g., winning conditions)

}

void ClassicMode::render(sf::RenderWindow& window) {
    float x = 100;
    float y = 200;

    for ( Player& player : players) {
        for ( Card& card : player.getHand()) {
            card.draw(window, x, y);
            x += 30;
        }
        y += 150;  // Move to the next row for each player
        x = 100;
    }
    BasraButton.draw(window);

}