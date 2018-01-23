//
// Created by VivianSnow on 2018/1/23.
//

#ifndef SFML_LEARN_FROG_H
#define SFML_LEARN_FROG_H

#include <SFML/Graphics.hpp>
#include <BaseObject.h>

class Frog : public BaseObject{
public:
    Frog(sf::Vector2u size);

    ~Frog();

    void Move(sf::Event event);

};


#endif //SFML_LEARN_FROG_H
