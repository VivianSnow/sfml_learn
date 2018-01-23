//
// Created by VivianSnow on 2018/1/23.
//

#ifndef SFML_LEARN_GAME_H
#define SFML_LEARN_GAME_H


#include <SFML/Graphics.hpp>
#include "Frog.h"
#include "Truck.h"

class Game {
public:

    Game();

    ~Game();

    void Loop();

private:

    sf::RenderWindow *window;

    Frog *frog;

    Truck *truck;
};


#endif //SFML_LEARN_GAME_H
