#pragma once

#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>
#include <algorithm>
#include <random>

class Deck {
private:
    std::vector<Card> cards;

public:
    Deck();
    void shuffle();
    Card drawCard();
    bool isEmpty() const;
};

#endif
