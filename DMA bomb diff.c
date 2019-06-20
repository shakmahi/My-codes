#include<stdio.h>
typedef struct bombdif
{
    int *arr,size,key;
}boundarray;
boundarray* bombdiffusion(int *bomb,int size,int key);
int main()
{
    int *bomb,size,ind,key,*diff;
    scanf("%d%d",&size,&key);
    bomb=(int*)malloc(sizeof(int)*size);
    for(ind=0;ind<size;ind++)
        scanf("%d",&bomb[ind]);
    boundarray *ptr;
    ptr=bombdiffusion(bomb,size,key);
    for(ind=0;ind<ptr->size;ind++)
        printf("%d ",ptr->arr[ind]);
    return 0;
}
boundarray* bombdiffusion(int *bomb,int size,int key)
{
    int *diff,itr,ind;
    diff=(int*)calloc(sizeof(int),size);
    for(ind=0;ind<size;ind++)
        for(itr=1;itr<=key;itr++)
            diff[ind]+=bomb[(ind+itr)%size];
         boundarray *ptr;
         ptr=(boundarray*)malloc(sizeof(boundarray));
         ptr->arr=diff;
         ptr->size=size;
         ptr->key=key;
    return ptr;
}
