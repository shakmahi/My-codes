#include<stdio.h>
#include<string.h>
int anagram(char arr[],char arr2[]);
int main()
{

    char str[50],str1[50];

    printf("enter string one");
    scanf("%s",str);
    printf("%s",str);
    printf("enter string two");
    scanf("%s",str1);

    if(anagram(str,str1)==1)
        printf("anagram");

    else
        printf("Not anagram");

    return 0;
}

int anagram(char arr[],char arr2[])
{

    int s1[26]={0},s2[26]={0},i=0;
    while(arr[i]!='\0')
     {

         s1[arr[i]-'a']++;
         i++;
     }
     i=0;
     while(arr2[i]!='\0')
     {

         s2[arr2[i]-'a']++;
         printf("%d",s2[arr[i]-'a']);         i++;
     }
     for(i=0;i<26;i++)

     {
         if(s1[i]!=s2[i])
         {
            printf(")))");
            return 0;

         }


     }
     return 1;
}
