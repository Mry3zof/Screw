#pragma once


#include <vector>
#include <string>
#include "Card.h"

class Player {
private:
    std::string name;
    std::vector<Card> hand;
    std::unique_ptr<Card> drawn_card;
    std::unique_ptr<Card> Hold_card;

public:
    Player(std::string name);

    void drawCard(Card card);
    void showHand() const;
    std::string getName() const;
    std::vector<Card>& getHand() ;
};


