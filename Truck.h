//
// Created by VivianSnow on 2018/1/23.
//

#ifndef SFML_LEARN_TRUCK_H
#define SFML_LEARN_TRUCK_H


#include <SFML/Graphics.hpp>
#include <BaseObject.h>

class Truck : public BaseObject{
public:
    Truck(sf::Vector2u size, float posX, float posY);

    ~Truck();

    void Move(sf::Vector2u size);

private:
    sf::RectangleShape truck;

    float originalPosX, originalPosY;
};


#endif //SFML_LEARN_TRUCK_H
