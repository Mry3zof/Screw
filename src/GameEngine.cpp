#include "GameEngine.h"

GameEngine::GameEngine(): currentState(nullptr) {}

GameEngine::~GameEngine() {
    if (currentState) delete currentState;
}

void GameEngine::changeState(GameState* newState) {
    if (currentState) delete currentState;  // Delete old state
    currentState = newState;  // Set new state
}

void GameEngine::handleInput(sf::Event event) {
    if (currentState) currentState->handleInput(event);
}

void GameEngine::update() {
    if (currentState) currentState->update();
}

void GameEngine::render(sf::RenderWindow& window) {
    if (currentState) currentState->render(window);
}
