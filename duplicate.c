#include<stdio.h>
main()
{
    int arr[100],i,j,k,n;
    printf("enter the number of elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {

       for(j=i+1;j<n;)
         {

            if(arr[j]==arr[i])
            {
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];

                }
                n--;
            }
            else
                j++;
         }
    }

   for(i=0;i<n;i++)
        printf("%d",arr[i]);

}
