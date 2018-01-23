//
// Created by VivianSnow on 2018/1/23.
//

#ifndef SFML_LEARN_BASEOBJECT_H
#define SFML_LEARN_BASEOBJECT_H


#include <SFML/Graphics.hpp>

class BaseObject {
public:
    BaseObject();

    ~BaseObject();

    void Draw(sf::RenderWindow &window);

    sf::RectangleShape getShape();

protected:
    sf::RectangleShape shape;
};


#endif //SFML_LEARN_BASEOBJECT_H
