#include <SFML/Graphics.hpp>
#include "Button.h"
#include <iostream>

void onUnoPressed() {
    std::cout << "Basra button clicked!" << std::endl;
}

int main() {
    // Create SFML window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Basra Button Test");

    // Create a button at (600, 500) with size (100x50)
    Button unoButton(350, 250, 100, 50, "Basra", onUnoPressed);
    

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    // Convert mouse click to SFML coordinates
                    sf::Vector2f mousePos(event.mouseButton.x, event.mouseButton.y);
                    unoButton.handleClick(mousePos);
                }
            }
        }

        // Clear and draw
        window.clear(sf::Color::Black);
        unoButton.draw(window);
        window.display();
    }

    return 0;
}
