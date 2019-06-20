#include<stdio.h>
#include<stdlib.h>
main()
{
    int *arr1,*arr2,*arr3,**arr,m=3,n=2,row,col;
    arr1=(int*)malloc(n*sizeof(int));
    arr2=(int*)malloc(n*sizeof(int));
    arr3=(int*)malloc(n*sizeof(int));
    arr=(int**)malloc(m*sizeof(int*));
    arr[0]=arr1;
    arr[1]=arr2;
    arr[2]=arr3;
    for(row=0;row<m;row++,printf("\n"))
    for(col=0;col<n;col++)
    printf("%d ",&arr[row][col]);
}
