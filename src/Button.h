#pragma once

#include <SFML/Graphics.hpp>
#include <functional>
#include <string>

class Button {
private:
    sf::RectangleShape shape;
    sf::Text label;
    sf::Font font;
    std::function<void()> onClick;

public:
    Button(float x, float y, float width, float height, const std::string& text, std::function<void()> onClick);
    void handleClick(sf::Vector2f mousePos);
    void draw(sf::RenderWindow& window);
};
