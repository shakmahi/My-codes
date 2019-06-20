#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
NODE *start=NULL,*tptr;
main()
{
    int ch,ele;
    printf("\t\tSLL");
    poda:
    printf("\nENTER THE CHOICE\n1.INSERT\n2.DISPLAY\n3.SIZE\n4.quit    :");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("\nenter the element: ");
        scanf("%d",&ele);
        insert(ele);
        printf("\n%d is inserted",ele);
        break;
    case 2:
        if(size()==0)
            printf("\nSLL is empty");
        else
        display();
        break;
    case 3:
        printf("SIZE: %d",size());
        break;
    case 4:
        exit(0);
    default:
        printf("\nINVALID CHOICE");
    }
    goto poda;
}
insert(int ele)
{
  NODE *newnode;
  newnode=(NODE*)malloc(sizeof(NODE));
  newnode->data=ele;
  newnode->next=NULL;
  if(start==NULL)
    start=newnode;
  else
  {
      if(newnode->data<start->data)
      {
          newnode->next=start;
          start=newnode;
      }
      else
      {
          for(tptr=start;tptr->next!=NULL;tptr=tptr->next)
          {
              if(newnode->data<tptr->next->data)
              {
                  newnode->next=tptr->next;
                  tptr->next=newnode;
                  return;
              }
          }
          tptr->next=newnode;

      }
  }
}
display()
{
    for(tptr=start;tptr!=NULL;tptr=tptr->next)
    printf("%d ",tptr->data);
}
size()
{
    int count=0;
    for(tptr=start;tptr!=NULL;count++,tptr=tptr->next);
    return count;
}
