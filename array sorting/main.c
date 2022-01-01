#include <stdio.h>
#include <stdlib.h>

int x[4];
int sort(int );
void maximum_no_position(int );
void minimum_no_position(int );
int main()
{
    printf("please enter 5 numbers\n");
    for(int count=0; count<=4; count++)
    {
        scanf("%d",&x[count]);
    }
    printf("before sorting\n");
    for(int i=0; i<=4; i++)
    {
        printf("%d\t",x[i]);
    }

    maximum_no_position (x[4]);

    minimum_no_position(x[4]);


    sort(x[4]);

    printf("\nafter sorting\n");
    for(int i=0; i<=4; i++)
    {
        printf("%d\t",x[i]);
    }

    maximum_no_position (x[4]);

    minimum_no_position(x[4]);

    return 0;
}
int sort(int w)
{
    int i,j,a=0;
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<=4; j++)
        {
            if(x[i]>x[j])
            {
                a=x[i];
                x[i]=x[j];
                x[j]=a;
            }
        }
    }
}

void maximum_no_position(int w)
{
    int i,j,a=0;
    for(i=0; i<=4; i++)
    {
            if(a<x[i])
            {
                a=i;
            }
    }

    printf("\nmaximum number = %d & it's position is %d\n",x[a],a+1);
}
void minimum_no_position(int w)
{
    int i,j,a=0;
    for(i=0; i<=4; i++)
    {
        if(x[i]<x[j])
           {
                a=i;
           }
    }
    printf("\nminimum number = %d & it's position is %d\n",x[a],a+1);

}
