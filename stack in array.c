#include<stdio.h>
typedef struct stack_arr
{
    int *stack,top,size;
}ST;
ST *ptr;
main()
{
    int ch,ele;
    ptr=(ST*)malloc(sizeof(ST));
    ptr->top=-1;
    printf("\t\tSTACK\nenter the size: ");
    scanf("%d",&ptr->size);
    ptr->stack=(int*)calloc(ptr->size,sizeof(int));
    poda:
    printf("\nEnter the choice:\n1.push\n2.pop\n3.display\n4.quit   :");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        if(isfull())
        printf("\NSTACK IS FULL!!!");
        else
        {
        printf("\nenter the element: ");
        scanf("%d",&ele);
        push(ele);
        printf("\n%d is inserted",ele);
        }
        break;
    case 2:
        if(isempty())
            printf("\nSTACK IS EMPTY!!!");
        else
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
    default:
        printf("\ninvalid choice");
    }
    goto poda;
}
push(int ele)
{
        ptr->stack[++ptr->top]=ele;
}
isfull()
{
        return ptr->top==ptr->size-1;
}
pop()
{
        printf("\n%d is popped",ptr->stack[ptr->top--]);
}
isempty()
{
        return ptr->top==-1;
}
display()
{
    int ind;
    if(isempty())
    printf("\nSTACK IS EMPTY!!!");
    else
    {
       for(ind=ptr->top;ind>=0;ind--)
            printf("%d ",ptr->stack[ind]);
    }

}
