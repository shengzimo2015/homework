#ifndef PLANEMOVE_H_INCLUDED
#define PLANEMOVE_H_INCLUDED
int planemove()
{
if (destroyyou==0)
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
            {
               shotmode=1;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
            {
               shotmode=2;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
            {
               shotmode=3;
            }
             if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num9))
            {
               hudun=3;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num8))
            {
               jgc=100;
            }
             if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
            {
               youlive=5;
            }
             if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
            {
               *power=5;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num0))
            {
               jgc=0;
               hudun=0;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)&&x<380)
            {
                plane.move(.5,0);
                x+=0.5;
            }
         if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)&&x>0)
            {
                plane.move(-.5,0);
                x-=0.5;
            }
         if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)&&y>0)
            {
                plane.move(0,-.5);
                y-=0.5;
            }
           if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)&&y<660)
            {
                plane.move(0,.5);
                y+=0.5;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
            {
                frequencyofshot++;
                if (frequencyofshot>=200)
                {
                         if (shotmode==1)
                         {
                                   if (fuckpower==1)
                                       {
                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=0;
                                       }
                                    if (fuckpower==2)
                                    {
                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+24;
                                       shoty[p]=y;
                                       shotsx[p]=0;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+72;
                                       shoty[p]=y;
                                       shotsx[p]=0;
                                    }
                                   if (fuckpower==3)
                                    {
                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=0;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=1;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=-1;
                                    }
                                    if (fuckpower==4)
                                    {
                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=0.3;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=1;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=-1;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=-0.3;
                                    }
                                     if (fuckpower==5)
                                    {
                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=0.4;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=1;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=-1;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=-0.4;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=0;

                                    }
                                     if (fuckpower==6)
                                     {
                                         if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=-1.8;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=-1.5;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=-1.2;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=-0.9;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=-0.6;
                                            }
                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=-0.3;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=0.3;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=0.6;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=0.9;
                                            }
                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=1.2;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=1.5;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=1.8;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=2.1;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=-2.1;
                                            }
                      if (jg<=0&&jgc==0) *power=5;
                      if (jg<=0&&jgc>0) {jgc--; jg=100;}
                                     }



                if (p>=100) p=1;
                         }
                    if (shotmode==2)
                    {
                         if (fuckpower==1)
                                       {
                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=float(rand()%100-50)/30;
                                       }
                                    if (fuckpower==2)
                                    {
                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+24;
                                       shoty[p]=y;
                                       shotsx[p]=float(rand()%100-50)/30;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+72;
                                       shoty[p]=y;
                                       shotsx[p]=float(rand()%100-50)/30;
                                    }
                                   if (fuckpower==3)
                                    {
                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+24;
                                       shoty[p]=y;
                                       shotsx[p]=float(rand()%100-50)/30;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=float(rand()%100-50)/30;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+72;
                                       shoty[p]=y;
                                       shotsx[p]=float(rand()%100-50)/30;
                                    }
                                    if (fuckpower==4)
                                    {
                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+24;
                                       shoty[p]=y;
                                       shotsx[p]=float(rand()%100-50)/30;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+40;
                                       shoty[p]=y;
                                       shotsx[p]=float(rand()%100-50)/30;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+56;
                                       shoty[p]=y;
                                       shotsx[p]=float(rand()%100-50)/30;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+72;
                                       shoty[p]=y;
                                       shotsx[p]=float(rand()%100-50)/30;
                                    }
                                     if (fuckpower==5)
                                    {
                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+24;
                                       shoty[p]=y;
                                       shotsx[p]=float(rand()%100-50)/30;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+36;
                                       shoty[p]=y;
                                       shotsx[p]=float(rand()%100-50)/30;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=float(rand()%100-50)/30;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+60;
                                       shoty[p]=y;
                                      shotsx[p]=float(rand()%100-50)/30;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+72;
                                       shoty[p]=y;
                                       shotsx[p]=float(rand()%100-50)/30;

                                    }
                                     if (fuckpower==6)
                                     {
                                         if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }
                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                               shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                               shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }
                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                               shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }
                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }
                                         if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=rand()%480;
                                                shoty[jg]=800;
                                                shotsx[jg]=0;
                                            }
                      if (jg<=0&&jgc==0) *power=5;
                      if (jg<=0&&jgc>0) {jgc--; jg=100;}
                                     }



                if (p>=100) p=1;
                    }
                     if (shotmode==3)
                    {
                         if (fuckpower==1)
                                       {
                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=0;
                                       }
                                    if (fuckpower==2)
                                    {
                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+24;
                                       shoty[p]=y;
                                       shotsx[p]=0;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+72;
                                       shoty[p]=y;
                                       shotsx[p]=0;
                                    }
                                   if (fuckpower==3)
                                    {
                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+24;
                                       shoty[p]=y;
                                       shotsx[p]=0;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=0;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+72;
                                       shoty[p]=y;
                                       shotsx[p]=0;
                                    }
                                    if (fuckpower==4)
                                    {
                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+24;
                                       shoty[p]=y;
                                       shotsx[p]=0;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+40;
                                       shoty[p]=y;
                                       shotsx[p]=0;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+56;
                                       shoty[p]=y;
                                       shotsx[p]=0;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+72;
                                       shoty[p]=y;
                                       shotsx[p]=0;
                                    }
                                     if (fuckpower==5)
                                    {
                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+24;
                                       shoty[p]=y;
                                       shotsx[p]=0;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+36;
                                       shoty[p]=y;
                                       shotsx[p]=0;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+48;
                                       shoty[p]=y;
                                       shotsx[p]=0;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+60;
                                       shoty[p]=y;
                                      shotsx[p]=0;

                                       while (shotis[p]!=0) p++;
                                       shotis[p]=1;
                                       shotx[p]=x+72;
                                       shoty[p]=y;
                                       shotsx[p]=0;

                                    }
                                     if (fuckpower==6)
                                     {
                                         if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y+1*5;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y+2*5;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y+3*5;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y+4*5;
                                                shotsx[jg]=0;
                                            }
                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y+5*5;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y+6*5;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                               shotx[jg]=x+48;
                                                shoty[jg]=y+7*5;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                               shotx[jg]=x+48;
                                                shoty[jg]=y+8*5;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y+9*5;
                                                shotsx[jg]=0;
                                            }
                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y+10*5;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y+11*5;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y+12*5;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                               shotx[jg]=x+48;
                                                shoty[jg]=y+13*5;
                                                shotsx[jg]=0;
                                            }

                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y+14*5;
                                                shotsx[jg]=0;
                                            }
                                        if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y+15*5;
                                                shotsx[jg]=0;
                                            }
                                         if (jg>0)
                                            {
                                                while (shotis[jg]!=0) jg--;
                                                shotis[jg]=1;
                                                shotx[jg]=x+48;
                                                shoty[jg]=y+16*5;
                                                shotsx[jg]=0;
                                            }
                      if (jg<=0&&jgc==0) *power=5;
                      if (jg<=0&&jgc>0) {jgc--; jg=100;}
                                     }



                if (p>=100) p=1;
                    }
                }
                if (frequencyofshot>=200) frequencyofshot=1;



            }
              hudunplane.setPosition(x,y);
              if (hudun>=1)  window.draw(hudunplane);
              if (wudi==0&&hudun==0)  window.draw(plane);
              wudiplane.setPosition(x,y);
              if  (wudi>0)  window.draw(wudiplane);
        }
}


#endif // PLANEMOVE_H_INCLUDED
