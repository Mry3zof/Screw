#include "ClassicMode.h"
#include <iostream>

ClassicMode::ClassicMode(int numPlayers): currentPlayerIndex(0) {
    deck.shuffle();

    // Create players
    for (int i = 0; i < numPlayers; i++) {
        players.emplace_back("Player " + std::to_string(i + 1));
    }
}

void ClassicMode::handleInput(sf::Event event) {
    if (event.type == sf::Event::KeyPressed) {
        if (event.key.code == sf::Keyboard::Space) {
            if (!deck.isEmpty()) {
                Player& currentPlayer = players[currentPlayerIndex];
                currentPlayer.drawCard(deck.drawCard());
                currentPlayer.showHand();

                // Switch turn to next player
                currentPlayerIndex = (currentPlayerIndex + 1) % players.size();
            } else {
                std::cout << "Deck is empty!" << std::endl;
            }
        }
    }
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
}


void ClassicMode::BeginDraw(int numPlayers) {
    for (int i = 0; i < 4; i++) {
        for (int i = 0; i < numPlayers; i++) {
            players[i].drawCard(deck.drawCard());
            players[i].showHand();
        }
    }
}