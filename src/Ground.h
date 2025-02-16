#pragma once
#include <vector>
#include "Card.h"
#include "Player.h"
#include <algorithm>
#include <random>
#include "Deck.h"



class Ground {
private:
	std::vector<Card> groundvec;
	std::unique_ptr<Card> actioncard;

	
public:
	void throwtoground();
	void reshuffel();
	bool isBasraOK();
	void takefromtheground();
	Card GetTopCard();
	void SetActionCard();
};
