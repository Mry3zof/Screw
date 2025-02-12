#include "Deck.h"

Deck::Deck() {

    Card::Effect Nothing = Card::Effect::Nothing;
    Card::Effect LookYourCard = Card::Effect::LookYourCard;
    Card::Effect LookElseCard = Card::Effect::LookElseCard;
    Card::Effect GiveAndTake = Card::Effect::GiveAndTake;
    Card::Effect LookAround = Card::Effect::LookAround;
    Card::Effect Drop = Card::Effect::Drop;
    Card::Effect SpcialCard = Card::Effect::SpcialCard;
    Card::Effect Give = Card::Effect::Give;

    for (int i = 0; i < 4; i++) {
        cards.emplace_back(1, Nothing, texturePath);
        cards.emplace_back(2, Nothing, texturePath);
        cards.emplace_back(3, Nothing, texturePath);
        cards.emplace_back(4, Nothing, texturePath);
        cards.emplace_back(5, Nothing, texturePath);
        cards.emplace_back(6, Nothing, texturePath);
        cards.emplace_back(7, LookYourCard, texturePath);
        cards.emplace_back(8, LookYourCard, texturePath);
        cards.emplace_back(9, LookElseCard, texturePath);
        cards.emplace_back(10, LookElseCard, texturePath);
        cards.emplace_back(10, GiveAndTake, texturePath);
        cards.emplace_back(20, Nothing, texturePath);
    }

    for (int i = 0; i < 2; i++) {
        cards.emplace_back(0, SpcialCard , texturePath);
        cards.emplace_back(25, SpcialCard, texturePath);
        cards.emplace_back(10, LookAround, texturePath);
        cards.emplace_back(10, Drop, texturePath);
    }
    cards.emplace_back(-1, Nothing, texturePath);
    cards.emplace_back(10, Give, texturePath);
}

void Deck::shuffle() {
    std::random_device rd;
    std::mt19937 rng(rd());
    std::shuffle(cards.begin(), cards.end(), rng);
}

Card Deck::drawCard() {
    if (cards.empty()) throw std::runtime_error("Deck is empty!");
    Card drawnCard = cards.back();
    cards.pop_back();
    return drawnCard;
}

bool Deck::isEmpty() const {
    return cards.empty();
}

//TODO remember to save the cards thrown to the ground to reshuffel it and continue playing after the deck is emptied
