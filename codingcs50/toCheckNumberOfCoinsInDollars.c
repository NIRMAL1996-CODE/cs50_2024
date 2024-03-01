#include<stdio.h>
int main()
{
    float dollar;
    int coin=0;
    int cents;
    printf("enter cash\n");
    scanf("%f",dollar);
    cents=dollar*100;
    printf("cents= %d\n",cents);
    while(cents>0)
    {
        if(cents>=25)
        {
            cents-=25;
        }
        else if(cents>=10)
        {
            cents-=10;
        }
        else if(cents>=5)
        {
            cents-=5;
        }
        else
        {
        coin++;
        }
    }
    printf("coins= %d",coin);
    
    return 0;
}