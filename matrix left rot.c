#include<stdio.h>
#include<stdlib.h>
typedef struct matrix_rot
{
    int **matrix,M,N;
}matrot;
matrot *matrixrot(int **arr,int m,int n);
main()
{
    int m,n,**arr,row,col;
    scanf("%d%d",&m,&n);
    arr=(int**)malloc(m*sizeof(int*));
    for(row=0;row<m;row++)
    arr[row]=(int*)malloc(n*sizeof(int));
    for(row=0;row<m;row++)
    for(col=0;col<n;col++)
    scanf("%d",&arr[row][col]);
    matrot *ptr;
     ptr=matrixrot(arr,m,n);
     for(row=0;row<ptr->M;row++,printf("\n"))
     for(col=0;col<ptr->N;col++)
     printf("%3d",ptr->matrix[row][col]);
}
matrot *matrixrot(int **arr,int m,int n)
{
    int **rarr,row,col,rr;
    rarr=(int**)malloc(n*sizeof(int*));
    for(row=0;row<n;row++)
    rarr[row]=(int*)malloc(m*sizeof(int));

    for(row=0,rr=n-1;row<n;row++,rr--)
    for(col=0;col<m;col++)
    rarr[row][col]=arr[col][rr];
    matrot *ptr;
    ptr=(matrot*)malloc(sizeof(matrot));
    ptr->matrix=rarr;
    ptr->M=n;
    ptr->N=m;
    return ptr;
}
