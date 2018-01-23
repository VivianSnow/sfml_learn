//
// Created by VivianSnow on 2018/1/23.
//

#include "Game.h"


Game::Game() {

    window = new sf::RenderWindow(sf::VideoMode(640, 480), "Frog");

    frog = new Frog(window->getSize());

    truck = new Truck(window->getSize(), 0, window->getSize().y / 2);
}

Game::~Game() {

}

void Game::Loop() {
    while (window->isOpen()) {

        sf::Event event;

        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
            else if (event.type == sf::Event::KeyPressed) {
                frog->Move(event);
            }
        }

        truck->Move(window->getSize());

        if (frog->getShape().getGlobalBounds().intersects(truck->getShape().getGlobalBounds()))
        {
            window->close();
        }

        window->clear();
        frog->Draw(*window);
        truck->Draw(*window);
        window->display();
    }
}