#include <SFML/Graphics.hpp>
#include "Card.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Card Game - Test Cards");

    Card::Effect Nothing = Card::Effect::Nothing;
    Card::Effect LookYourCard = Card::Effect::LookYourCard;
    Card::Effect LookElseCard = Card::Effect::LookElseCard;
    Card::Effect GiveAndTake = Card::Effect::GiveAndTake;
    Card::Effect LookAround = Card::Effect::LookAround;
    Card::Effect Drop = Card::Effect::Drop;
    Card::Effect SpcialCard = Card::Effect::SpcialCard;


    Card card1(1 , Nothing, "../../../assets/One.png");
    Card card2(2 , Nothing, "../../../assets/Two.png");
    Card card3(3, Nothing, "../../../assets/Two.png");
    Card card4(4, Nothing, "../../../assets/Two.png");
    Card card5(5, Nothing, "../../../assets/Two.png");
    Card card6(6, Nothing, "../../../assets/Two.png");
    Card card7(7, LookYourCard, "../../../assets/Two.png");
    Card card8(8, LookYourCard, "../../../assets/Two.png");
    Card card9(9, LookElseCard, "../../../assets/Two.png");
    Card card10(10, LookElseCard, "../../../assets/Two.png");
    Card card11(10, GiveAndTake, "../../../assets/Two.png");
    Card card12(10, LookAround, "../../../assets/Two.png");
    Card card13(10, Drop, "../../../assets/Two.png");
    Card card14(0, SpcialCard, "../../../assets/Two.png");
    Card card15(25, SpcialCard, "../../../assets/Two.png");
    Card card16(20, Nothing, "../../../assets/Two.png");
    Card card17(-1, Nothing, "../../../assets/Two.png");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Green); 

        // Draw cards
        card1.draw(window, 200, 200);
        card2.draw(window, 350, 200);

        window.display();
    }

    return 0;
}
