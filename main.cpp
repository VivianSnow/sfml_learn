#include <SFML/Graphics.hpp>
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), L"愤怒的小鸟");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Cyan);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            else if (event.type == sf::Event::KeyPressed) {
                if(event.key.code == sf::Keyboard::Escape)
                    window.close();
            }
        }
<<<<<<< HEAD
=======
//        shape.move(10, 0);
>>>>>>> ef48c385e98e5b1f2e46e8ed1fe99632d088371b
        window.clear();
        window.draw(shape);
        window.display();
    }
    return 0;
}
