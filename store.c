#include <stdio.h>
#include <stdlib.h>
typedef struct sale
{
   char name;
   int number;
   int price;
};
struct sale m[10];
int main()
{
    int a,k=1,money=10000,p,q,i;
    printf("------------order----------\n");
	printf("------------1 in-----------\n");
	printf("------------2 out----------\n");
	printf("------------3 menu---------\n");
	printf("------------4 money--------\n");
	printf("------------0 exit---------\n");
	lable:
	scanf("%d",&a);
	getchar();
	switch(a)
	{
    case 1:printf("please read the name of the sale\n");
           scanf("%c",&m[k].name);
           getchar();
           printf("please read the number of the sale\n");
           scanf("%d",&m[k].number);
           printf("please read the price of the sale\n");
           scanf("%d",&m[k].price);
            getchar();
           money=money-m[k].number*m[k].price;
           k++;
           break;
    case 2:printf("please read the serial number of the sale\n");
           scanf("%d",&p);
           printf("please read the number to out\n");
           scanf("%d",&q);
           m[p].number-=q;
           money=money+q*m[p].price;
           break;
    case 3:
           printf("name    number    price\n");
           for (i=1;i++;i<k)
               printf("%c    %d    %d\n",m[i].name,m[i].number,m[i].price);
           break;
    case 4: printf("%d",money);
             break;
	}
	goto lable;


    return 0;
}
