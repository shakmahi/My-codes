#include<stdio.h>
#include<stdlib.h>
typedef struct image_rot
{
    int **image,M,N;
}imgrot;
imgrot *imagerot(int **arr,int m,int n);
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
    imgrot *ptr;
     ptr=imagerot(arr,m,n);
     for(row=0;row<ptr->M;row++,printf("\n"))
     for(col=0;col<ptr->N;col++)
     printf("%3d",ptr->image[row][col]);
}
imgrot *imagerot(int **arr,int m,int n)
{
    int start,end,temp;
    for(start=0,end=m-1;start<end;start++,end--)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    }
    imgrot *ptr;
    ptr=(imgrot*)malloc(sizeof(imgrot));
    ptr->image=arr;
    ptr->M=m;
    ptr->N=n;
    return ptr;
}
