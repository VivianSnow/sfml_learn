//
// Created by VivianSnow on 2018/1/23.
//

#include "BaseObject.h"

BaseObject::BaseObject() {

}

BaseObject::~BaseObject() {

}


void BaseObject::Draw(sf::RenderWindow &window) {
    window.draw(shape);
}

sf::RectangleShape BaseObject::getShape() {
    return shape;
}