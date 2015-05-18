#include <stdio.h>
#include <stdlib.h>
void hanoi(int n,char A,char B,char C)
{
    if (n==1)
    {
        printf("move %d from %c to %c\n",n,A,C);
    }
    else
    {
        hanoi(n-1,A,C,B);
        printf("move %d from %c to %c\n",n,A,C);
        hanoi(n-1,B,A,C);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    hanoi(n,'A','B','C');

    return 0;
}
