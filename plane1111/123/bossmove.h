#ifndef BOSSMOVE_H_INCLUDED
#define BOSSMOVE_H_INCLUDED
int bossmove()
{
     if (score%100==0&&score/100==bossi)
        {
          bossis[bossi]=1;
          bossx[bossi]=rand()%380;
          bossy[bossi]=-168;
          bossn[bossi]=1;
          bosslive[bossi]=40+score/15;
          bossi++;
        }
        for (i=1;i<=50;i++)
        {
            if (bossis[i]==1)
            {
            bossx[i]=bossx[i]+0.05*bossn[i];
            bossy[i]+=0.05*bossm[i];
            if (bossy[i]>=90) bossm[i]=-1;
            if (bossy[i]<=0) bossm[i]=1;
            if (bossx[i]>=330) bossn[i]=-1;
            if (bossx[i]<=0) bossn[i]=1;
            boss1.setPosition(bossx[i],bossy[i]);
            boss2.setPosition(bossx[i],bossy[i]);
            if (bosslive[i]>=20+score/30) window.draw(boss1);
            else window.draw(boss2);
            }
        }
        for (i=1;i<=50;i++)
        {
            if (bossis[i]==1)
            {
                if (bossy[i]>9.85&&bossy[i]<10&&eplaneshotis[o]==0)
                {
                  eplaneshotis[o]=1;
                  eplaneshotx[o]=bossx[i]+0;
                  eplaneshoty[o]=bossy[i]+0;
                  eplaneshotsx[o]=-0.5;
                  o++;
                  if (o==500) o=1;
                  eplaneshotis[o]=1;
                  eplaneshotx[o]=bossx[i]+0;
                  eplaneshoty[o]=bossy[i]+0;
                  eplaneshotsx[o]=0;
                  o++;
                  if (o==500) o=1;

                  eplaneshotis[o]=1;
                  eplaneshotx[o]=bossx[i]+0;
                  eplaneshoty[o]=bossy[i]+0;
                  eplaneshotsx[o]=0.5;
                  o++;
                  if (o==500) o=1;

                  eplaneshotis[o]=1;
                  eplaneshotx[o]=bossx[i]+168;
                  eplaneshoty[o]=bossy[i]+0;
                  eplaneshotsx[o]=-0.5;
                  o++;
                  if (o==500) o=1;
                  eplaneshotis[o]=1;
                  eplaneshotx[o]=bossx[i]+168;
                  eplaneshoty[o]=bossy[i]+0;
                  eplaneshotsx[o]=0;
                  o++;
                  if (o==500) o=1;

                  eplaneshotis[o]=1;
                  eplaneshotx[o]=bossx[i]+168;
                  eplaneshoty[o]=bossy[i]+0;
                  eplaneshotsx[o]=0.5;
                  o++;
                  if (o==500) o=1;
                }
            }
        }
}


#endif // BOSSMOVE_H_INCLUDED
