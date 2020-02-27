//the 5
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, col, i , j;
    int** A;
    printf("Enter row and column:\n");
    scanf("%d %d", &row, &col);
    A=(int**)malloc(row*sizeof(int*));
    if (A == NULL) exit(EXIT_FAILURE);
    for(i = 0; i < row ; i++)
    {
    A[i]=(int *)malloc(col*sizeof(int));
    if (A[i] == NULL)
    exit(EXIT_FAILURE);
    }
    for(i=0;i<row;i++)
    {
            for(j=0;j<col;j++)
            {
                A[i][j]=(i+1)*(j+1);
            }
    }
    for(i=0;i<row;i++)
    {
            for(j=0;j<col;j++)
            {
                printf("%d-",A[i][j]);
            }
            printf("\n");
    }
    for (i = 0; i < row; i++)
    {
        free(A[i]);
    }
    free(A);
    return 0;
}
// به عنوان مثال از یک برنامه جدول ضرب نوشته شده است
