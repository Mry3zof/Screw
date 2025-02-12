#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>
#include "Card.h"

class Player {
private:
    std::string name;
    std::vector<Card> hand;

public:
    Player(std::string name);

    void drawCard(Card card);
    void showHand() const;
    std::string getName() const;
    std::vector<Card>& getHand() ;
};

#endif
