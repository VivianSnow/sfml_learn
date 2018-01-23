//
// Created by VivianSnow on 2018/1/23.
//

#include "Frog.h"

Frog::Frog(sf::Vector2u size) {

    shape.setSize(sf::Vector2f(80, 80));
    shape.setPosition(sf::Vector2f(shape.getPosition().x, size.y - shape.getSize().y));
}

Frog::~Frog() {
}


void Frog::Move(sf::Event event) {
    if(event.key.code == sf::Keyboard::Left)
        shape.move(-80, 0);
    else if(event.key.code == sf::Keyboard::Right)
        shape.move(80, 0);
    else if(event.key.code == sf::Keyboard::Up)
        shape.move(0, -80);
    else if(event.key.code == sf::Keyboard::Down)
        shape.move(0, 80);
}
