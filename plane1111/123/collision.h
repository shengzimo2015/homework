#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED
int collision()
{
     for (i=1;i<=100;i++)
            for (j=1;j<=100;j++)
            {
                if (bossis[i]==1&&shotis[j]==1&bossy[i]<shoty[j]&&shoty[j]<bossy[i]+251&&bossx[i]<shotx[j]&&shotx[j]<bossx[i]+168)
                {
                    bosslive[i]--;
                    shotis[j]=0;
                    if (bosslive[i]==0)
                        {
                             bossis[i]=0;
                             score2+=100;
                             destroybossx=bossx[i];
                             destroybossy=bossy[i];
                             destroyboss=1;
                             {
                                 numofgift++;
                                if (giftis[numofgift]==0) {
                                                                giftis[numofgift]=1;
                                                                gifty[numofgift]=bossy[i]+80;
                                                                giftx[numofgift]=bossx[i]+50;
                                                          }
                                if (numofgift==10) numofgift=1;
                             }
                             gift2=rand()%100;
                             if (gift2<=30)
                             {
                                 numofgift2++;
                                if (giftis2[numofgift2]==0) {
                                                                giftis2[numofgift2]=1;
                                                                gifty2[numofgift2]=planey[i]+80;
                                                                giftx2[numofgift2]=planex[i]+60;
                                                          }
                                if (numofgift2==10) numofgift2=1;
                             }
                             sprintf(scorestr,"%d",score+score2);
                             showscore.setString(scorestr);

                        }
                }
            }
        for (i=1;i<=10;i++)
            if (giftis[i]==1)
            {
            gifty[i]+=0.2;
            if (gifty[i]>800) giftis[i]=0;
            else
            {
                powerup.setPosition(giftx[i],gifty[i]);
                window.draw(powerup);
            }
            }
        for (i=1;i<=10;i++)
            if (giftis2[i]==1)
            {
            gifty2[i]+=0.2;
            if (gifty2[i]>800) giftis2[i]=0;
            else
            {
                live.setPosition(giftx2[i],gifty2[i]);
                window.draw(live);
            }
            }
        for (i=1;i<=50;i++)
            for (j=1;j<=100;j++)
            {
                if (planeis[i]==1&&shotis[j]==1&&planey[i]<shoty[j]&&shoty[j]<planey[i]+100&&planex[i]<shotx[j]&&shotx[j]<planex[i]+68)
                {
                    planelive[i]--;
                    shotis[j]=0;
                    if (planelive[i]==0)
                        {
                             planeis[i]=0;
                             score+=10;
                             sprintf(scorestr,"%d",score+score2);
                             showscore.setString(scorestr);
                             gift=rand()%100;
                             if (gift<=10)
                             {
                                 numofgift++;
                                if (giftis[numofgift]==0) {
                                                                giftis[numofgift]=1;
                                                                gifty[numofgift]=planey[i]+20;
                                                                giftx[numofgift]=planex[i]+20;
                                                          }
                                if (numofgift==10) numofgift=1;
                             }
                             gift2=rand()%100;
                             if (gift2<=3)
                             {
                                 numofgift2++;
                                if (giftis2[numofgift2]==0) {
                                                                giftis2[numofgift2]=1;
                                                                gifty2[numofgift2]=planey[i]+20;
                                                                giftx2[numofgift2]=planex[i]+20;
                                                          }
                                if (numofgift2==10) numofgift2=1;
                             }
                             if (destroy==0)
                             {
                             destroyx=planex[i];
                             destroyy=planey[i];
                             destroy=1;
                             }
                             else
                             {
                                 destroyxadd=planex[i];
                                 destroyyadd=planey[i];
                                 destroyadd=1;
                             }
                        }
                }
            }
        for (i=1;i<=10;i++)
            if (giftis[i]==1&&giftx[i]<=x+83&&giftx[i]+42>=x&&gifty[i]+68>=y&&gifty[i]<=y+113)
        {
            giftis[i]=0;
            if (*power==5||*power==6) {*power=6;jg=100;if (jgc<=2)jgc=2;}
            if (*power==4) *power=5;
            if (*power==3) *power=4;
            if (*power==2) *power=3;
            if (*power==1) *power=2;
        }
        for (i=1;i<=10;i++)
            if (giftis2[i]==1&&giftx2[i]<=x+83&&giftx2[i]>=x&&gifty2[i]>=y&&gifty2[i]<=y+113)
        {
            giftis2[i]=0;
            if (youlive==5&&hudun==0) hudun=1;
            if (youlive==4) youlive=5;
            if (youlive==3) youlive=4;
            if (youlive==2) youlive=3;
            if (youlive==1) youlive=2;
        }
        for (i=1;i<=50;i++)
        {
            if (planeis[i]==1&&planex[i]+18>x&&x+53>planex[i]&&planey[i]+70>y&&y+103>planey[i]&&destroyyou==0&&wudi==0)
            {
                if (hudun==0) youlive--;
                planeis[i]=0;
                if (destroy==0)
                             {
                             destroyx=planex[i];
                             destroyy=planey[i];
                             destroy=1;
                             }
                             else
                             {
                                 destroyxadd=planex[i];
                                 destroyyadd=planey[i];
                                 destroyadd=1;
                             }
                if (hudun==0)
                {
                destroyyou=1;
                destroyyoux=x;
                destroyyouy=y;
                }
                if (hudun==1) hudun=0;
            }
        }
         for (i=1;i<=500;i++)
        {
            if (eplaneshotis[i]==1&&eplaneshotx[i]>x+31&&eplaneshotx[i]<x+71&&eplaneshoty[i]>y+37&&eplaneshoty[i]<y+97&&destroyyou==0&&wudi==0)
            {
                if (hudun==0) youlive--;
                eplaneshotis[i]=0;
                if (hudun==0)
                {
                destroyyou=1;
                destroyyoux=x;
                destroyyouy=y;
                }
                if (hudun==1) hudun=0;
            }
        }
}

#endif // COLLISION_H_INCLUDED
