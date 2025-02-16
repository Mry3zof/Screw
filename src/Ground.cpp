#include "Ground.h"

void Ground::throwtoground() {
	groundvec.push_back(*actioncard);
}

void Ground::reshuffel() {
	std::random_device rd;
	std::mt19937 rng(rd());
	std::shuffle(groundvec.begin(), groundvec.end(), rng);

}

//bool isBasraOK() {
//	if (Hold_card) {
//
//	}
//}
