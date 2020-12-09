#include <iostream>
#include <SFML\Graphics.hpp>
#include "voltageDrop.h"

using namespace std;

sf::Vector2f viewSize(1024, 768);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "Hello Game SFML !!!",
                        sf::Style::Default);
sf::Texture skyTexture;
sf::Sprite skySprite;

void init()
{
    skyTexture.loadFromFile("Assets/graphics/sky.png");
    skySprite.setTexture(skyTexture);
}
void draw()
{
    window.draw(skySprite);
}

int main()
{
    double I = 10;
    double L = 30;
    int Voltage = 230;
    double cableSize = 2.5;
    std::string AL_CU= "CU";
    std::string AC_DC= "AC";
    std::string PhaseType = "1AC";

    voltageDrop voltDropObj(I, L, Voltage, cableSize, AL_CU, AC_DC);
    cout<<"\n\n Voltage drop in cable:\t"<<voltDropObj.voltageDropNum(PhaseType)<<"V";
    cout<<"\n%Voltage drop in cable:\t"<<voltDropObj.voltPercent()<<"%";

    init();
    while (window.isOpen())
    {
        window.clear(sf::Color::Red);
        draw();
        window.display();
    }
    return 0;
}
