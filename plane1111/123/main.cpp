#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include<stdlib.h>
#include "var.h"
#include "tands.h"
#include "planemove.h"
#include "shotmove.h"
#include "bossmove.h"
#include "eshotmove.h"
#include "eplanemove.h"
#include "collision.h"
#include "destroyandreset.h"
extern int fofplane(int m);
int main()
{
    textureandsprite();
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        h2++;
        if (h2>=fofplane(score)/100)
        {
        h++;
        h2=1;
        }
        if (h==0) h=-800;
        map1.setPosition(0,h);
        map2.setPosition(0,h+800);
        window.draw(map1);
        window.draw(map2);
        if (youlive>0)
        {
        planemove();
        shotmove();
        bossmove();
        eshotmove();
        eplanemove();
        collision();
        destroyandreset();
        }
        else {
                gg.setPosition(145,320);
                window.draw(gg);
                yourscoreis.setPosition(145,370);
                window.draw(yourscoreis);
                showscore.setPosition(305,360);
                window.draw(showscore);
                }

    window.display();
    }
    return 0;
}
