#include "Player.h"
#include <iostream>

Player::Player(std::string name): name(name) {}

void Player::drawCard(Card card) {
    hand.push_back(card);
}

void Player::showHand() const {
    std::cout << name << "'s hand: ";
    for (const Card& card : hand) {
        std::cout << card.getValue() << " of " << card.getEffect() << ", ";
    }
    std::cout << std::endl;
}



std::string Player::getName() const { return name; }
std::vector<Card>& Player::getHand()  { return hand; }
