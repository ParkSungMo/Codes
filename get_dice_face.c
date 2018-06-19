#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_dice_face(void);
int count_number;

int main(void)
{   
    srand( (unsigned)time(NULL));
    
    int i=0;
    while(i<=500)
    {
        get_dice_face();
        i++;
    }
}
void get_dice_face(void)
{
    int a;
    static int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0;
    
        a = rand()%6;
        if(a==0)
            d1++;
        else if(a==1)
            d2++;
        else if(a==2)
            d3++;
        else if(a==3)
            d4++;
        else if(a==4)
            d5++;
        else if(a==5)
            d6++;
     count_number++;
     
    if (count_number%100==0)
    printf("%d %d %d %d %d %d\n",d1,d2,d3,d4,d5,d6);   
}
