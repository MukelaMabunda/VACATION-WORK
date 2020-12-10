#include <iostream>
#include <SFML\Graphics.hpp>
#include <string>
#include "voltageDrop.h"

using namespace std;

sf::Vector2f viewSize(500, 500);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "Voltage Drop Calculator",sf::Style::Default);
sf::Texture foundationlogoTexture;
sf::Sprite foundationlogoSprite;

void init()
{
    foundationlogoTexture.loadFromFile("foundationlogo.png");
    foundationlogoSprite.setTexture(foundationlogoTexture);
}
void draw()
{
    window.draw(foundationlogoSprite);
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
    cout<<"\n%Voltage drop in cable:\t"<<voltDropObj.voltPercent()<<"%";

    init();

    sf::RectangleShape rect(sf::Vector2f(100.0f, 30.0f));
    rect.setFillColor(sf::Color::Transparent);
    rect.setPosition(viewSize.x / 6, viewSize.y / 5);
    rect.setOrigin(sf::Vector2f(rect.getSize().x / 2, rect.getSize().y/2));

    sf::Font font;
    if (!font.loadFromFile("times-new-roman.ttf"))
    {
        cerr<<"ERROR font not loaded";
    }

    sf::Text text1;
    text1.setFont(font);
    auto [Xc,Rc,Zc] = voltDropObj.getUsedImpedance();
    std::string data = "Cable data:\nSize\t" + std::to_string(cableSize) + "mm^2\nR = \t" +std::to_string(Rc)+"\nX = \t"+std::to_string(Xc)+"\nZ = \t"+std::to_string(Zc);
    text1.setString(data);
    text1.setCharacterSize(25);
    sf::Color color1(140, 116, 89);
    text1.setFillColor(color1);
    text1.setStyle(sf::Text::Regular);

    sf::Text text2;
    text2.setFont(font);
    std::string voltDropText = "\n\n Voltage drop in cable:\t" + std::to_string(voltDropObj.voltageDropNum(PhaseType))+"V";
    text1.setString(voltDropText);
    text2.setCharacterSize(30);
    sf::Color color2(165, 30, 54);
    text2.setFillColor(color2);
    text2.setStyle(sf::Text::Regular);

    sf::Text text3;
    text3.setFont(font);
    std::string voltDropPercentText = "\n%Voltage drop in cable:\t"+std::to_string(voltDropObj.voltPercent())+"%";
    text1.setString(voltDropPercentText);
    text3.setCharacterSize(30);
    sf::Color color3(29, 29, 28);
    text3.setFillColor(color3);
    text3.setStyle(sf::Text::Regular);

    while (window.isOpen())
    {
        window.clear(sf::Color::Black);
        draw();
        window.draw(rect);
        window.draw(text1);
        window.draw(text2);
        window.draw(text3);
        window.display();
    }
    return 0;
}
