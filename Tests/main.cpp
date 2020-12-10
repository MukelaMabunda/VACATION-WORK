#include <iostream>
#include <stdlib.h>
#include <conio.h>
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
    double L = 10;
    int Voltage = 10;
    double cableSize = 1;
    std::string AL_CU= "CU";
    std::string AC_DC= "AC";
    std::string PhaseType = "1AC";

    init();

    sf::Font font;
    if (!font.loadFromFile("times-new-roman.ttf"))
    {
        cerr<<"ERROR font not loaded";
    }

    while(1)
    {

        cout<<"Input cable current 1 - 10000:\n";
        //cin>>I;
        cout<<"Input cable lenghth 1 - 10000:\n";
        //cin>>L;
        cout<<"Input cable voltage 1 - 10000:\n";
        //cin>>Voltage;
        cout<<"Input cable size 1 - 1000:\n";
        //cin>>cableSize;
        cout<<"Input cable material Aluminium-AL, Copper-CU:\n";
        //cin>>AL_CU;
        cout<<"Input current type Alternatin-AC, Direct-DC:\n";
        //cin>>AC_DC;
        if(AC_DC!="DC")
        {
            cout<<"Input number of phases single phase - 1AC, three phase - 3AC:\n";
            //cin>>PhaseType;
        }
        else
        {
            PhaseType = "DC";
        }

        voltageDrop voltDropObj(I, L, Voltage, cableSize, AL_CU, AC_DC);

        sf::Text text1;
        text1.setFont(font);
        auto [Xc,Rc,Zc] = voltDropObj.getUsedImpedance();
        std::string data = "Cable data:\nSize\t" + std::to_string(cableSize) + "mm\nR = \t" +std::to_string(Rc)+"\nX = \t"+std::to_string(Xc)+"\nZ = \t"+std::to_string(Zc);
        text1.setString(data);
        text1.setCharacterSize(25);
        sf::Color color1(140, 116, 89);
        text1.setFillColor(color1);
        text1.setPosition (0, 0);
        text1.setStyle(sf::Text::Regular);

        sf::Text text2;
        text2.setFont(font);
        std::string voltDropText = "\n\nVoltage drop in cable:\n" + std::to_string(voltDropObj.voltageDropNum(PhaseType))+"V\n";
        text2.setString(voltDropText);
        text2.setCharacterSize(25);
        sf::Color color2(165, 30, 54);
        text2.setFillColor(color2);
        text2.setPosition (0, 250);
        text2.setStyle(sf::Text::Regular);

        sf::Text text3;
        text3.setFont(font);
        std::string voltDropPercentText = "\n%drop in cable:\n"+std::to_string(voltDropObj.voltPercent())+"%\n";
        text3.setString(voltDropPercentText);
        text3.setCharacterSize(25);
        sf::Color color3(29, 29, 28);
        text3.setFillColor(color3);
        text3.setPosition (0, 350);
        text3.setStyle(sf::Text::Regular);

        while (window.isOpen())
        {
            window.clear(sf::Color::Black);
            draw();
            window.draw(text1);
            window.draw(text2);
            window.draw(text3);
            window.display();
        }
    }

    return 0;
}
