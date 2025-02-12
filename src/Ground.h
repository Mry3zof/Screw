#pragma once
#include <vector>
#include "Card.h"



class Ground {
private:
	std::vector<Card> groundvec;
	
public:
	void throwtoground();
	void reshuffel();
	bool isBasraOK();
	void takefromtheground();
	Card GetTopCard();

};