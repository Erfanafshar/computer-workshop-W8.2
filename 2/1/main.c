//the 2
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int *a=NULL;
    int i , j;
    for(i=0;i<1000;i++)
    {
        if(a==NULL)
        {
            a=(int *)malloc (1*sizeof(int));
        }
        else ;
        printf("enter number (0 to finish) : \n");
        scanf("%d",(a+i));
        if (*(a+i)==0)
        {
            break;
        }
        else
        {
            a=(int *)realloc(a,1*sizeof(int));
        }
    }
    printf("\n\nyour numbers are : \n");
    for (j=0;j<i;j++)
    {
        printf("%d\n",*(a+j));
    }
    return 0 ;
}







