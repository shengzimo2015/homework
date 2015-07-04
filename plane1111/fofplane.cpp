int fofplane(int m)
{
    int fx,n;
    n=m*2;
    if (n>=0)    fx=1000;
    if (n>=500)  fx=900;
    if (n>=1000) fx=800;
    if (n>=1500) fx=700;
    if (n>=2000) fx=600;
    if (n>=2500) fx=570;
    if (n>=3000) fx=540;
    if (n>=3500) fx=510;
    if (n>=4000) fx=480;
    if (n>=4500) fx=450;
    if (n>=5000) fx=420;
    if (n>=5500) fx=390;
    if (n>6000) fx=370;
    if (n>=6500) fx=350;
    if (n>=7000) fx=340;
    if (n>=7500) fx=330;
    if (n>8000) fx=325;
    if (n>=8500) fx=320;
    if (n>=9000) fx=315;
    if (n>=9500) fx=310;
    if (n>10000) fx=300;
   return fx;
}
