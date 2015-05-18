#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<conio.h>


#define  X  10
#define  Y  10

int   x1 = 7, y1 = 1;
int   x2 = 6, y2 = 2;

char  map[X][Y] = { '*', '*', '*', '*', '*', '*', '*', '*', '*', '*',
                    '*', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', '*',
                    '*', ' ', ' ', ' ', ' ', ' ', '*', ' ', '*', '*',
                    '*', ' ', ' ', '*', ' ', ' ', ' ', ' ', '*', '*',
                    '*', '*', ' ', '*', ' ', ' ', ' ', '*', '*', '*',
                    '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X', '*',
                    '*', ' ', 'O', '*', '*', ' ', ' ', ' ', ' ', '*',
                    '*', 'p', ' ', ' ', '*', ' ', ' ', ' ', '*', '*',
                    '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*',
                    '*', '*', '*', '*', '*', '*', '*', '*', '*', '*' };



void   showmap()
{
	system("cls");
	int m ,n;
	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
			printf("%c", map[m][n]);
		printf("\n");
	}

}

int   box(int a,int b)
{
	char  move;


	move = map[x2 + a][y2 + b];
	switch (move)
	{
	case ' ':map[x2 + a][y2 + b] = 'O';
             map[x2][y2] = ' ';
             return 1;
	case 'X':printf("you win!!!");
	         exit(0);
	case '*':
	default:return 0;
	}


}


void  people(int A,int B)
{
	char aim;
	aim = map[x1 + A][y1 + B];
	switch (aim)
	{
	case 'O':if (box(A, B)){
	                          map[x1 + A][y1 + B] = 'P';
                              map[x1][y1] = ' ';
	                          x1+= A;
                              y1 += B;
                              x2 += A;
                              y2 += B;
                              break;
                           }
	case ' ': map[x1 + A][y1 + B] = 'P';
              map[x1][y1] = ' ';
              x1 += A;
              y1 += B;
              break;
	case '*':break;
	default:break;
	}
	showmap();
}
int  main()
{
	char order;
	showmap();

	while (order=_getch())
	{
		switch (order)
		{
		case 'w':people(-1, 0); break;
		case 's':people(1, 0); break;
		case 'a':people(0, -1); break;
		case 'd':people(0, 1); break;
		default: break;
		}
	}
	return 0;
}
