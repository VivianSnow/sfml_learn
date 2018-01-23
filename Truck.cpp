//
// Created by VivianSnow on 2018/1/23.
//

#include "Truck.h"

Truck::Truck(sf::Vector2u size, float posX, float posY) {
    shape.setSize(sf::Vector2f(120, 60));
    shape.setFillColor(sf::Color::Red);
    shape.setPosition(sf::Vector2f(posX, posY));

    originalPosX = posX;
    originalPosY = posY;
}

Truck::~Truck() {

}

void Truck::Move(sf::Vector2u size)
{
    shape.move(0.05, 0);

    if (truck.getPosition().x > size.x)
    {
        truck.setPosition(sf::Vector2f(0 - truck.getSize().x, originalPosY));
    }
}
