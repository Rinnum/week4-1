#include<stdio.h>
int main()
{
    int num[3];
    int i,j,min;
    for(i=0;i<3;i++)
    {
    printf("Enter number!");
    scanf("%d", &num[i]);
    }
    min = num[0];
    for (j = 0; j < 3; j++) 
    {
        if (min > num[j]) 
            min = num[j];
        else{}
    }
    printf("%d",min);
    return 0;
}