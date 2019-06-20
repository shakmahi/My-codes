#include<stdio.h>
#include<stdlib.h>
main()
{
    int arr[100][100],row,col,m,n;
    scanf("%d%d",&m,&n);//3x4
    for(row=0;row<m;row++)
    for(col=0;col<n;col++)
    scanf("%d",&arr[row][col]);
    for(row=0;row<m;row++,printf("\n"))
    for(col=0;col<n;col++)
    printf("%3d",arr[row][col]);
}
