#ifndef EPLANEMOVE_H_INCLUDED
#define EPLANEMOVE_H_INCLUDED
int eplanemove()
{
    for (j=1;j<=50;j++)
        {
             planey[j]+=0.2;
              if (planey[j]>800) planeis[j]=0;
            if (planeis[j]==1)
            {
                planef.setPosition(planex[j],planey[j]);
                window.draw(planef);
            }

        }
}


#endif // EPLANEMOVE_H_INCLUDED
