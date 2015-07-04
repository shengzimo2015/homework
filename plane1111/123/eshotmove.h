#ifndef ESHOTMOVE_H_INCLUDED
#define ESHOTMOVE_H_INCLUDED

int eshotmove()
{
    extern int fofplane(int m);
    feplaneshot++;
        if (feplaneshot>=fofplane(score))
        {
            if (eplaneshotis[o]==0)
                                {
                                    for (i=1;i<=100;i++)
                                    {
                                        if (planeis[i]==1)
                                        {
                                            k++;
                                            if (k==3)
                                            {
                                            eplaneshotis[o]=1;
                                            eplaneshotx[o]=planex[i]+32;
                                            eplaneshoty[o]=planey[i]+100;
                                            eplaneshotsx[o]=0;
                                            o++;
                                            k=1;
                                            }
                                        }
                                    }

                                }
            if (o>=500) o=1;
            feplaneshot=1;
        }
        for (i=1;i<=500;i++)
                {
                    if (eplaneshotis[i]==1)
                    {
                            eplaneshoty[i]+=0.4;
                            eplaneshotx[i]+=eplaneshotsx[i]*0.5;
                            if (eplaneshoty[i]>800) eplaneshotis[i]=0;
                            else
                                {
                                    shot2shape.setPosition(eplaneshotx[i],eplaneshoty[i]);
                                    window.draw(shot2shape);

                                }
                    }
                }

        tforplane++;
        if (tforplane>=fofplane(score)) {

                                while (planeis[numofplane]!=0) {if (numofplane<50) numofplane++; else numofplane=1;}
                                                                planeis[numofplane]=1;
                                                                planey[numofplane]=0;
                                                                planex[numofplane]=rand()%380;
                                                                planelive[numofplane]=3+score/1000;
                                                                if (wudi>0) wudi-=1;

                                if (numofplane==50) numofplane=1;
                                tforplane=1;
                            }
}

#endif // ESHOTMOVE_H_INCLUDED
