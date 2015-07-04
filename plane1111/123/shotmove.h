#ifndef SHOTMOVE_H_INCLUDED
#define SHOTMOVE_H_INCLUDED

int shotmove()
{
    for (i=1;i<=100;i++)
                {
                    if (shotis[i]==1)
                    {
                            shoty[i]-=0.7;
                            shotx[i]+=shotsx[i]*0.3;
                            if (shoty[i]<0||shoty[i]>800) shotis[i]=0;
                            else
                                {
                                    shotshape.setPosition(shotx[i],shoty[i]);
                                    window.draw(shotshape);
                                }
                    }
                }
}

#endif // SHOTMOVE_H_INCLUDED
