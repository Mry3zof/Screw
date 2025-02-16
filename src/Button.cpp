#include "Button.h"
#include <iostream>

// Constructor for Button
Button::Button(float x, float y, float width, float height, const std::string& text, std::function<void()> onClick)
    : onClick(onClick) {

    shape.setSize(sf::Vector2f(width, height));
    shape.setPosition(x, y);
    shape.setFillColor(sf::Color::Red);

    if (!font.loadFromFile("../../../assets/Sigmar-Regular.ttf")) {  // Load font (make sure the file exists!)
        std::cerr << "Failed to load font!" << std::endl;
    }

    label.setFont(font);
    label.setString(text);
    label.setCharacterSize(20);
    label.setFillColor(sf::Color::White);
    label.setPosition(x + 10, y + 10);
}

// Handle Click
void Button::handleClick(sf::Vector2f mousePos) {
    if (shape.getGlobalBounds().contains(mousePos)) {
        onClick(); // Call the function when clicked
    }
}

// Draw Button
void Button::draw(sf::RenderWindow& window) {
    window.draw(shape);
    window.draw(label);
}
