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
        cards.emplace_back(1, Nothing, "../../../assets/One.png");
        cards.emplace_back(2, Nothing, "../../../assets/two.png");
        cards.emplace_back(3, Nothing, "../../../assets/Three.png");
        cards.emplace_back(4, Nothing, "../../../assets/Four.png");
        cards.emplace_back(5, Nothing, "../../../assets/Five.png");
        cards.emplace_back(6, Nothing, "../../../assets/Six.png");
        cards.emplace_back(7, LookYourCard, "../../../assets/Seven.png");
        cards.emplace_back(8, LookYourCard, "../../../assets/Eight.png");
        cards.emplace_back(9, LookElseCard, "../../../assets/Nine.png");
        cards.emplace_back(10, LookElseCard, "../../../assets/Ten.png");
        cards.emplace_back(10, GiveAndTake, "../../../assets/Give_and_take.png");
        cards.emplace_back(20, Nothing, "../../../assets/20+.png");
    }

    for (int i = 0; i < 2; i++) {
        cards.emplace_back(0, SpcialCard , "../../../assets/Zero.png");
        cards.emplace_back(25, SpcialCard, "../../../assets/Screw.png");
        cards.emplace_back(10, LookAround, "../../../assets/Kaab_Dayr.png");
        cards.emplace_back(10, Drop, "../../../assets/Basra.png");
    }
    cards.emplace_back(-1, Nothing, "../../../assets/-1.png");
    cards.emplace_back(10, Give, "../../../assets/Give.png");
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
