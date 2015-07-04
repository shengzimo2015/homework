#ifndef DESTROYANDRESET_H_INCLUDED
#define DESTROYANDRESET_H_INCLUDED

int destroyandreset()
{
        if (destroyyou==1)
        {
            g++;
            if (g<=200){dyou1.setPosition(destroyyoux,destroyyouy);window.draw(dyou1); youdown1.play();  }
            if (g>200&&g<=400) {dyou2.setPosition(destroyyoux,destroyyouy);window.draw(dyou2);}
            if (g>400&&g<600) {dyou3.setPosition(destroyyoux,destroyyouy);window.draw(dyou3);}
            if (g>600)
            {
            die.setPosition(15,380);
            window.draw(die);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Tab))
            {
               if (*power>=2){
                                numofgift++;
                                if (giftis[numofgift]==0) {
                                                                giftis[numofgift]=1;
                                                                gifty[numofgift]=y-400;
                                                                giftx[numofgift]=x+20;
                                                          }
                                if (numofgift==10) numofgift=1;
                             }
                if (*power>=4){
                                numofgift++;
                                if (giftis[numofgift]==0) {
                                                                giftis[numofgift]=1;
                                                                gifty[numofgift]=y-400;
                                                                giftx[numofgift]=x+40;
                                                          }
                                if (numofgift==10) numofgift=1;
                               }
            plane.setPosition(sf::Vector2f(200, 600));x=200;y=600;
            wudi=3;
            *power=1;
            destroyyou=0;
            g=1;
            }
            }
        }
        if (destroy==1)
        {
        d++;
        if (d<=200){spdestroy1.setPosition(destroyx,destroyy);window.draw(spdestroy1);   enemydown1.play();}
        if (d>200&&d<=400) {spdestroy2.setPosition(destroyx,destroyy);window.draw(spdestroy2);}
        if (d>400&&d<600) {spdestroy3.setPosition(destroyx,destroyy);window.draw(spdestroy3);}
        if (d>=600&&d<800) {spdestroy4.setPosition(destroyx,destroyy);window.draw(spdestroy4);}
        if (d==800) {d=1;destroy=0;}
         }
         if (destroyadd==1)
            {
        d2++;
        if (d2<=200){spdestroy1.setPosition(destroyxadd,destroyyadd);window.draw(spdestroy1);   enemydown1.play();}
        if (d2>200&&d2<=400) {spdestroy2.setPosition(destroyxadd,destroyyadd);window.draw(spdestroy2);}
        if (d2>400&&d2<600) {spdestroy3.setPosition(destroyxadd,destroyyadd);window.draw(spdestroy3);}
        if (d2>=600&&d2<800) {spdestroy4.setPosition(destroyxadd,destroyyadd);window.draw(spdestroy4);}
        if (d2==800) {d2=1;destroyadd=0;}
         }
         if (destroyboss==1)
         {
             d3++;
             bossdown.play();
            if (d3<=200){bossdestroy1.setPosition(destroybossx,destroybossy);window.draw(bossdestroy1);  }
            if (d3>200&&d3<=400) {bossdestroy2.setPosition(destroybossx,destroybossy);window.draw(bossdestroy2);}
            if (d3>400&&d3<600) {bossdestroy3.setPosition(destroybossx,destroybossy);window.draw(bossdestroy3);}
            if (d3>=600&&d3<800) {bossdestroy4.setPosition(destroybossx,destroybossy);window.draw(bossdestroy4);}
            if (d3>=800&&d3<=1200) {bossdestroy5.setPosition(destroybossx,destroybossy);window.draw(bossdestroy5);}
            if (d3>=1200&&d3<1500) {bossdestroy6.setPosition(destroybossx,destroybossy);window.draw(bossdestroy6);}
            if (d3==1500) {d3=1;destroyboss=0;}
         }
         text.setPosition(20,20);
         showscore.setPosition(50,60);
         window.draw(text);
         window.draw(showscore);
         if (youlive==1) {live.setPosition(10,750);window.draw(live);}
         if (youlive==2) {live.setPosition(10,750);window.draw(live);live.setPosition(30,750);window.draw(live);}
         if (youlive==3) {live.setPosition(10,750);window.draw(live);live.setPosition(30,750);window.draw(live);live.setPosition(50,750);window.draw(live);}
         if (youlive==4) {live.setPosition(10,750);window.draw(live);live.setPosition(30,750);window.draw(live);live.setPosition(50,750);window.draw(live);live.setPosition(70,750);window.draw(live);}
         if (youlive==5) {live.setPosition(10,750);window.draw(live);live.setPosition(30,750);window.draw(live);live.setPosition(50,750);window.draw(live);live.setPosition(70,750);window.draw(live);live.setPosition(90,750);window.draw(live);}
}

#endif // DESTROYANDRESET_H_INCLUDED
