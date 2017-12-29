#include<string.h>
#include<stdio.h>
void main()
{

    char text[100],pattern[10];
    int i,j,a;
    printf("enter TEXT : ");
    gets(text);
    printf("enter PATTERN : ");
    gets(pattern);
    for(i=0;i<100;i++)
    {
        if(text[i]==pattern[0])
        {
            a=i;
            for(j=0;j<strlen(pattern);j++)
            {
                if(text[a]!=pattern[j])
                {
                    a=-1;
                    break;
                }
                ++a;
            }
            if(a!=-1)
            {
                printf("found at index = %d",i+1);
                break;
            }
        }
    }
    if(a==-1)
    {
        printf(" not found");
    }

}

