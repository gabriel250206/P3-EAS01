#include "Rectangle.hpp"
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include "Rectangle.hpp"
using namespace sf;
using namespace std;

int main()
{
    // setup
    RenderWindow window(VideoMode(800, 600), "SFML works!");
    window.setFramerateLimit(60);
    Rectangle r(Vector2f(30,30));
    r.drawTo(window);

    // loop
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
            
            if(event.type==Event::MouseButtonPressed){
                if(event.mouseButton.button== Mouse::Left){
                   
                    r.setObjective(Vector2f( Mouse::getPosition(window)));
                }
            }

                
                
                
            /** (5pts)
                Cuando se de click izquierdo, se deberá actualizar el objetivo del cuadrado a la posición del mouse.
            */

        }

        window.clear();
        r.update();
        r.drawTo(window);
        window.display();
    }

    return 0;
}
