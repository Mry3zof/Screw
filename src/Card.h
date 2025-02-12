#pragma once

#ifndef CARD_H
#define CARD_H

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

class Card {
public:
    enum class Effect { Nothing = 0, LookYourCard = 1, LookElseCard = 2, GiveAndTake = 3, LookAround = 4, Drop = 5, SpcialCard = 6, Give = 7 };

private:
    int value;  
    Effect effect;
   
    sf::Texture texture;
    sf::Sprite sprite;

public:
    
    Card(int value, Effect, std::string texturePath);

    void draw(sf::RenderWindow& window, float x, float y);
    int getValue() const;
    Effect getEffect() const;
};

#endif
