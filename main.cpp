#include <SFML/Graphics.hpp>

int main()
{
    //создаем объект класса виндоу-это конуструктор, мы передаем туда параметры.размер и заголовок окна
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    //создаем объект класса .f-тип float
    sf::CircleShape shape(100.f); // конструктор копирования
    // метод установить цвет
    shape.setFillColor(sf::Color::Blue);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}